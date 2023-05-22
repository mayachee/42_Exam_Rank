#include <unistd.h>


int ft_test(char *str, char c, int len)
{
    int i = 0;

    while (str[i] && (len > i || len == -1))
    {
        if (str[i] == c)
            return 1;
        i++;
    }
    return 0;
    
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int i = 0;
        while (av[1][i])
        {
            if (!ft_test(av[1], av[1][i], i) && ft_test(av[2], av[1][i], -1))
            {
                write(1, &av[1][i], 1);
            }
            i++;
        }      
    }
    write(1, "\n", 1);
}