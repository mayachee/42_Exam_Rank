#include <unistd.h>
#include <stdio.h>

void rostring(char *av)
{
    int i = 0;
    int w = 0;

    while (av[i])
    {
        while (av[i] == '\t' || av[i] == ' ')
            i++;
        if (av[i] && !(av[i] == '\t' || av[i] == ' '))
        {
            if (w == 0)
            {
                while (av[i] && !(av[i] == '\t' || av[i] == ' '))
                {
                    w++;
                    i++;
                }
            }
            else{
                while (av[i] && !(av[i] == '\t' || av[i] == ' '))
                {
                    write(1, &av[i], 1);
                    i++;
                }
                write(1, " ", 1); 
            }
        }
    }
    i = 0;
    while ((av[i] == '\t' || av[i] == ' '))
        i++;
    while(w--)
    {
        write(1, &av[i], 1);
        i++;
    }
}
int main(int ac, char **av)
{
    if (ac >= 2)
        rostring(av[1]);
    write(1, "\n", 1);
}
