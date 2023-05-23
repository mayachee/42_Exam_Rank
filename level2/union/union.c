#include <unistd.h>

int ft_com(char *str, char c, int k)
{
    int i = 0;

    while (i < k)
    {
        if (str[i] == c)
            return 0;
        i++;
    }
    return 1;
}
int main(int ac, char **av)
{
    if (ac == 3)
    {
        int i = 0;
        int j = 0;
        int k = 0;
        while (av[1][i])
        {
            i++;
        }
        while(av[2][j])
        {
            av[1][i] = av[2][j];
            j++;
            i++;
        }
        while (k < i)
        {
            if(ft_com(av[1], av[1][k], k)== 1)
            {
                write(1, &av[1][k], 1);
            }
            k++;
        }
    }
    write(1, "\n", 1);
}