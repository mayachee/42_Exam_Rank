#include <stdio.h>

int strcmp(const char *s1, const char *s2)
{
    int i = 0;

    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
        return (s1[i] - s2[i]);
}

int main(void)
{
    char s1[6] = "dffff";
    char s2[10] = "dffff";
    printf("%d\n", strcmp(s1, s2));
}