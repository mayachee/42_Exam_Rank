#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i = 0;
    int len = 0;
    while(src[len])
    {
        len++;
    }
    char *str = (char *)malloc(sizeof(char *) * (len + 1));
    while (src[i])
    {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return str;
}

#include <string.h>
#include <stdio.h>
int main() {
    printf("%s", strdup("yassine"));
    printf("%s", ft_strdup("yassine"));
    return 0;
}