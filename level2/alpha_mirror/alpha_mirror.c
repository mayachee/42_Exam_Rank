#include <unistd.h>

void alpha_mirror(char *av)
{
    int i = 0;
    int j = 0;

    while (av[i])
    {
        if ((av[i] >= 'a' && av[i] <= 'z'))
            av[i] = 'z' - av[i] + 'a';
        if ((av[i] >= 'A' && av[i] <= 'Z'))
            av[i] = 'Z' - av[i] + 'A';
        write(1, &av[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        alpha_mirror(av[1]);
    write(1, "\n", 1);
    return 0;
}