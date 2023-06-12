#include <unistd.h>

void    rot_13(char *av)
{
    int i = 0;
    while (av[i])
    {
        if ((av[i] >= 'a' && av[i] < 'n') || (av[i] >= 'A' && av[i] < 'N'))
            av[i] += 13;
        else  if ((av[i] >= 'N' && av[i] <= 'Z') || (av[i] >= 'n' && av[i] <= 'z'))
            av[i] -= 13;
        write(1, &av[i], 1);
        i++;
    }
}
int main(int ac, char **av)
{
    if (ac == 2)
        rot_13(av[1]);
    write(1, "\n", 1);
    return 0;
}