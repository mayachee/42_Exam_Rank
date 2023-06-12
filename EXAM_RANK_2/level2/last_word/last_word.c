#include <unistd.h>

void    last_word(char *av)
{
    int i = 0;
    int j = 0;
    while (av[i])
    {
        if (av[i] == ' ' && av[i + 1] >= 33 && av[i + 1] <= 126)
            j = i + 1;
        i++;
    }
    while (av[j] >= 33 && av[j] <= 126)
    {
        write(1, &av[j], 1);
        j++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        last_word(av[1]);
    write(1, "\n", 1);
    return 0;
}