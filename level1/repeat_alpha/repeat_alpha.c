#include <unistd.h>

void repeat_alpha(char *av)
{
    int i = 0;
    int j = 0;

    while(av[i])
    {
        if (av[i] >= 'a' || av[i] <= 'z')
        {
            j = 0;
            while (j < (av[i] - 'a'))
            {
                write(1, &av[i], 1);
                j++;
            }
        }
        else if (av[i] >= 'A' || av[i] <= 'Z')
        {
            j = 0;
            while (j < (av[i] - 'A'))
            {
                write(1, &av[i], 1);
                j++;
            }
        }
        write(1, &av[i], 1);
        i++;
    }
}
int main(int ac, char **av)
{
    if (ac == 2)
        repeat_alpha(av[1]);
    write(1, "\n", 1);
    return (0);
}