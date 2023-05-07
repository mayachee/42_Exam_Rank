#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int i  = 128; // / binary 10000000
    while (i > 0)
    {
        if (octet & i)
            write(1, "1", 1);
        else
            write(1, "0", 1);
        i >>= 1 ;// shift i to the right by 1 position
    }
}

#include <stdio.h>

int main(void)
{
    print_bits(2);
}