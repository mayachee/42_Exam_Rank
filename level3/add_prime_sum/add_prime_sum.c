#include <unistd.h>
#include <stdlib.h>

int ft_atoi(char *av)
{
    int i = 0;
    int nbr = 0;
    while ((av[i] >= '0' && av[i] <= '9' )&& av[i])
    {
        nbr = nbr  * 10 + av[i] - '0';
        i++;
    }
    return nbr;
}

int add_prime_sum(int nbr)
{
    int i = 3;

    if (nbr <= 1 || (nbr % 2 == 0 && nbr > 2))
		return 0;
    else
    {
        while (i < (nbr / 2))
        {
            if (nbr % i == 0)
               return 0;
            i+=2;
        }
        return 1;
    }
}


void ft_putnbr(int n)
{
    if (n < 0) {
        write(STDOUT_FILENO, "-", 1);
        n = -n;
    }

    if (n >= 10) {
        ft_putnbr(n / 10);
    }

    char c = n % 10 + '0';
    write(STDOUT_FILENO, &c, 1);
}

int main(int ac, char **av)
{

    if (ac == 2)
    {
    int nb = ft_atoi(av[1]);
    int sum = 0;
		while (nb > 0)
			if (add_prime_sum(nb--))
				sum += (nb + 1);
		ft_putnbr(sum);
	}
    	if (ac != 2)
		ft_putnbr(0);
    write(1, "\n", 1);
    return 0;
}