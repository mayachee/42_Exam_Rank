#include <stdio.h>
#include <unistd.h>

int    ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int sss = 0;
    while((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while((str[i] >= '0' && str[i] <= '9') && str[i])
    {
        sss = sss * 10 + str[i++] - '0';
    }
    return (sss * sign);
}
int main(void)
{
    printf("%d\n", ft_atoi("-100"));
}