#include <unistd.h>

void epur_str(char *av)
{
    int i = 0;
    int bl = 0;

    while (av[i] == ' ' || av[i] == '\t')
        i++;
    while (av[i])
    {
        if (av[i] == ' ' || av[i] == '\t')
            bl = 1;
        if (!(av[i] == ' ' || av[i] == '\t'))
        {
            if (bl==1)
                write(1, " ", 1);
            bl = 0;
            write(1, &av[i] , 1);
        }
        i++;
    }
}
int main(int ac, char **av)
{
    if (ac == 2)
        epur_str(av[1]);
    write(1, "\n", 1);
    return 0;
}