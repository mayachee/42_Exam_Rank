#include <unistd.h>

int main(int ac, char **av)
{
    if (ac >= 2)
    {
        int i = 0;
        int j = 1;
        while (av[j])
        {
            i = 0;
            while (av[j][i])
            {
                if (av[j][i] >= 'A' && av[j][i] <= 'Z')
                    av[j][i] += 32;
                if ((av[j][i - 1] == ' ' || av[j][i - 1] == '\t') && (av[j][i] >= 'a' && av[j][i] <= 'z') )
                    av[j][i] -= 32;
            if (av[j][0] >= 'a' && 'z' >= av[j][0])
		        av[j][i] -= 32;
                write(1, &av[j][i], 1);
                i++;
            }
            write(1, "\n", 1);
            j++;
        }
    }
    else
         write(1, "\n", 1);
    return 0;
}