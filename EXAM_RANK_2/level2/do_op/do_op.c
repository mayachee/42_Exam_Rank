#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if (ac == 4)
    {
        int nbr2 = atoi(av[1]);
        int nbr1 = atoi(av[3]);
        if (av[2][0] == '+')
            printf("%d", (nbr2 + nbr1));
         if (av[2][0] == '-')
            printf("%d", (nbr2 - nbr1));
         if (av[2][0] == '*')
            printf("%d", (nbr2 * nbr1));
         if (av[2][0] == '/')
            printf("%d", (nbr2 / nbr1));
        if (av[2][0] == '%')
            printf("%d", (nbr2 % nbr1));
    }
    printf("\n");
}