#include <stdio.h>
#include <stdlib.h>

int len_digit(long nbr)
{
    int len = 1;

    if (nbr < 0)
    {
        len++;
        nbr = -nbr;
    }
    while (nbr >= 10)
    {
        nbr = nbr / 10;
        len ++;
    }
    return len;
}

char	*ft_itoa(int n)
{
    char *nbr;
    int bl = 0;
    long n1 = n;

    int len = len_digit(n1);
    nbr = (char *)malloc(sizeof(nbr) * len + 1);
    if (!nbr)
    {
        return (NULL);
    }
    nbr[len] = '\0';
    if (n1 < 0)
    {
        n1 *= -1;
        bl = 1;
    }
    while(len--)
    {
        nbr[len] = (n1 % 10) + '0';
        n1 /= 10;
    }
    if (bl == 1)
    {
        nbr[0] = '-';
    }
    return nbr;
}

int main(void)
{
    printf("%s", ft_itoa(-2147483647));
}