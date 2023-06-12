#include <unistd.h>

void ft_put_nbr(int nbr)
{
    char str[10] = "0123456789";
    if (nbr >= 10)
        ft_put_nbr(nbr / 10);
    write(1, &str[nbr % 10], 1);
}

int main(void)
{
    int i = 0;
    while (i <= 100)
    {
        if ((i % 5 == 0) && (i % 3 == 0))
            write(1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write(1, "fizz", 4);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
        else
            ft_put_nbr(i);
        write(1, "\n", 1);
        i++;
    }
    return (0);
}