#include <unistd.h>
#include <stdlib.h>

void reverse_words(char *str)
{
    int i = 0, j = 0;
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    if (str[i])
    {
        j = i;
        while (str[j] && str[j] != ' ' && str[j] != '\t')
            j++;
        reverse_words(&str[j]);
        write(1, &str[i], j - i);
        if (str[i - 1])
            write(1, " ", 1);
        i = j;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        reverse_words(argv[1]);
    write(1, "\n", 1);
    return 0;
}