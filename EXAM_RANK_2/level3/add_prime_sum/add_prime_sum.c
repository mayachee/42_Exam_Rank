#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *nbr)
{
    int i = 0;
    int n = 0;
    while ((nbr[i] >= '0' && nbr[i] <= '9') && nbr[i])
    {
        n = n * 10 + nbr[i] - '0';
        i++;
    }
    return n;
}

void    ft_putstr(unsigned int	nbr)
{
    char i;
    if (nbr >= 10)
    {
        ft_putstr(nbr / 10);
        ft_putstr(nbr % 10);
    }
    i = nbr + 48;
    write(1, &(i), 1);
}

int    add_prime_sum(int nbr)
{
    int i = 3;

    printf("dddd");
    ft_putstr(100);
    printf("\n");
    if (nbr <= 1 || (nbr % 2 == 0 && nbr >= 2))
        return (0);
    while (i < (nbr/2))
    {
        if (nbr % 2 == 0)
            return (1);
        i += 2;
    }
    return (0);
}

int main(int ac, char **av)
{
    int i = 0;
    int sum = 0;
    int nbr = ft_atoi(av[1]);

    if (ac != 2)
        write(1, "0", 1);
    if (ac == 2)
    {
        while (i > nbr)
        {
            /* code */
            if (add_prime_sum(nbr--))
                sum += (nbr + i);
            ft_putstr(sum);
            i++;
        }
        
    }
    write(1, "\n", 1);
    return 0;
}