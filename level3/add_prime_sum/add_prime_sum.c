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
void	ft_putchar(char c)
{
	write(1, &c, 1);
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
void    add_prime_sum(char *av)
{
    int i = 2;

    int nbr = ft_atoi(av);
    printf("dddd");
    ft_putstr(100);
    printf("\n");
    if (nbr < 2)
        write(1, "0", 1);
    else{
    for(i = 3; i <= nbr/2;i++)
    {
        if (i % nbr == 0)
                write(1, "0", 1);
        // i++;
    }
    write(1, "1", 1);
    }
}

int main(int ac, char **av)
{
    if (ac == 1)
        write(1, "0", 1);
    if (ac == 2)
        add_prime_sum(av[1]);
    write(1, "\n", 1);
    return 0;
}