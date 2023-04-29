#include <stdio.h>
#include <unistd.h>

char    *ft_strrev(char *str)
{
    int len = 0;
    int i = 0;
    char sss;

    while(str[len])
        len++;
    len--;
    while(i < len)
    {
        sss = str[i];
        str[i] = str[len];
        str[len] = sss;
        len--;
        i++;
    }
    return (str);
}

int main(void)
{    char str[] = "hello world";
    printf("%s\n", ft_strrev(str));
    return 0;
}