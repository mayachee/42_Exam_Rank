#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int j = 0;
    int i = 0;

    while (s[i])
    {
        j = 0;
        while (reject[j])
        {
            if (s[i] == reject[j])
                return i;
            j++;
        }
        i++;
    }
    return i;
}

// int main(void)
// {
//     printf("%lu\n", strcspn("yassie", "cerferf"));
//     printf("%zu\n", ft_strcspn("yassie", "cerferf"));
// }
