#include <unistd.h>

int ft_atoi(char *av)
{
    int i = 0;
    int nbr = 0;
    while ((av[i] >= '0' && av[i] <= '9') && av[i] )
    {
        nbr = nbr * 10 + av[i] - '0';
        i++;
    }
    return nbr;
}
void print_hex(int av)
{
    char hex[16] = "0123456789abcdef";
    if (av >= 16)
        print_hex(av / 16);
    write(1, &hex[av % 16], 1);
}
int main(int ac, char **av)
{
    if (ac == 2)
    {
         int nbr = ft_atoi(av[1]);
        print_hex(nbr);
    }
    write(1, "\n", 1);
    return 0;
}