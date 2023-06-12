#include <unistd.h>

int ft_isblank(char c)
{
    return ((c == ' ' || c == '\t'));
}
void rostring(char *av)
{
    int i = 0;
    int w = 0;

    while(av[i])
    {
        while (ft_isblank(av[i]))
            i++;
        if (av[i] && !ft_isblank(av[i]))
        {
            if (w == 0)
                while (av[i] && !ft_isblank(av[i++]))
                    w++;
            else
            {
                while(av[i] && !ft_isblank(av[i]))
                    write(1, &av[i++], 1);
                write(1, " ", 1);
            }
        }
    }

    i =0;
    while (ft_isblank(av[i]))
        i++;
    while (w--)
        write(1, &av[i++], 1);
}
int main(int ac, char **av)
{
    if (ac >= 2)
        rostring(av[1]);
    write(1, "\n", 1);
    return 0;
}