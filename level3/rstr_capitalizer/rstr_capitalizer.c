#include <unistd.h>

void rstr_capitalizer(char **av)
{
    int i = 0;
    int j = 1;

    while (av[j][i])
    {
        i = 0;
        while (av[j][i])
        {
            if ((av[j][i] >= 'A' && av[j][i] <= 'Z'))
                av[j][i] += 32;
            if ((av[j][i] >= 'a' && av[j][i] <= 'z') && (av[j][i + 1] == '\t' || av[j][i + 1] == ' ' || av[j][i + 1] == '\0'))
                av[j][i] -= 32;
            write(1, &av[j][i], 1);
            i++;
        }
        write(1, "\n", 1);
        j++;
    }
}

int main(int ac, char **av)
{
    if (ac >= 2)
        rstr_capitalizer(av);
    write(1, "\n", 1);
    return 0;
}