#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int in;
int out;
int fds[2] = {-1, -1};

enum {
    PIPE, SEMI, NONE
};

int str_type(char *str)
{
    if (str)
    {
        if (!strcmp(str, "|"))
            return PIPE;
        if (!strcmp(str, ";"))
            return SEMI;
    }
    return NONE;
}

int end_line(char **argv, int i)
{
    while (argv[i] && str_type(argv[i]) == NONE)
        i++;
    return i;
}

void err(char *str)
{
    while (str && *str)
        write(2, str++, 1);
}

int fatal(int ret)
{
    if (ret == -1)
    {
        err("error: fatal\n");
        exit(1);
    }
    return (ret);
}

void fd_moment(int fd)
{
    if (fds[0] == -1 || fds[1] == -1)
        return ;
    fatal(dup2(fds[fd], fd));
    fatal(close(fds[0]));
    fatal(close(fds[1]));
    fds[0] = -1;
    fds[1] = -1;
}

int run_program(char **argv, char **envp, int i)
{
    int end = end_line(argv, i);
    int type = str_type(argv[end]);

    if (type == PIPE)
        pipe(fds);
    if (str_type(argv[i]) != NONE)
        return end;

    if (!strcmp(argv[i], "cd"))
    {
        if (end == i + 2)
        {
            if (chdir(argv[i + 1]) == -1)
            {
                err("error: cd: cannot change directory to ");
                err(argv[i + 1]);
                err("\n");
            }
        }
        else
        {
            err("error: cd: bad arguments\n");
        }
        return end;
    }
    else
    {
        pid_t id = fork();
        fatal(id);
        if (id == 0)
        {
            if (type == PIPE)
                fd_moment(1);
            argv[end] = 0;
            execve(argv[i], &argv[i], envp);
            err("error: cannot execute ");
            err(argv[i]);
            err("\n");
            exit(1);
        }
        fd_moment(0);
    }

    if (type != PIPE)
    {
        while (waitpid(-1, 0, 0) != -1);
        fatal(dup2(in, 0));
        fatal(dup2(out, 1));
    }

    return end;
}

int main(int argc, char **argv, char **envp)
{
    int i = 1;
    in = dup(0);
    out = dup(1);
    while (i < argc)
    {
        i = run_program(argv, envp,i ) + 1;
    }
    close(in);
    close(out);
}