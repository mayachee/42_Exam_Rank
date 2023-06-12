#include <unistd.h>

void snake_to_camel(char *av)
{
    int i = 0;

    while (av[i])
    {
        if (av[i] == '_')
        {
            av[i + 1] -= 32;
        }
        if (av[i] != '_')
            write(1, &av[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        snake_to_camel(av[1]);
    write(1, "\n", 1);
}