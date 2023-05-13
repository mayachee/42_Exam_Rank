#include <stdio.h>
#include <stdlib.h>

int pgcd(int a, int b) {
    int c;
    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int nbr1 = atoi(av[1]);
        int nbr2 = atoi(av[2]);
        printf("%d", pgcd(nbr1, nbr2));
    }
    printf("\n");
    return 0;
}