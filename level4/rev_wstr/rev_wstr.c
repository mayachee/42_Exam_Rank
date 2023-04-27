#include <unistd.h>


#include <unistd.h>
#include <stdlib.h>

void rev_wstr(char *str)
{
    int i = 0;
    int j = 0;
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    if (str[i])
    {
        j = i;
        while (str[j] != ' ' && str[j] != '\t' && str[j])
            j++;
        rev_wstr(&str[j]);
        write(1, &str[i], j - i);
        if (str[i - 1])
            write(1, " ", 1);
        i = j;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        rev_wstr(argv[1]);
    write(1, "\n", 1);
    return 0;
}