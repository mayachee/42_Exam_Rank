#include <unistd.h>

void rotone(char *av)
{
    int i = 0;
    while(av[i])
    {
        if ((av[i] >= 'a' && av[i] <= 'y') || (av[i] >= 'A' && av[i] <= 'Y'))
            av[i] +=1;
        else if (av[i] == 'z' || av[i] == 'Z')
            av[i] -= 25;
        write(1, &av[i], 1);
        i++;
    }
}
int main(int ac, char **av)
{
    if (ac == 2)
        rotone(av[1]);
    write(1, "\n", 1);
    return 0;
}