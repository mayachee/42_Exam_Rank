#include <unistd.h>

void rev_print(char *av)
{
    int len = 0;
    int i = 0;
    while (av[len])
        len++;
    while (len)
    {
        write(1, &av[--len], 1);
    }
}
int main(int ac, char **av)
{
    if (ac == 2)
        rev_print(av[1]);
    write(1, "\n", 1);
    return 0;
}
