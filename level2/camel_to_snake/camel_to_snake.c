#include <unistd.h>

void camel_to_snake(char *av)
{
    int i = 0;

    while (av[i])
    {
        if (av[i] >= 'A' && av[i] <= 'Z')
        {
            av[i] += 32;
            write(1, "_", 1);
        }
        write(1, &av[i], 1);
        i++;
    }
}
int main(int ac, char **av)
{
    if (ac == 2)
        camel_to_snake(av[1]);
    write(1, "\n", 1);
}