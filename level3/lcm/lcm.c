#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    if (a == 0 || b == 0) {
        return 0;
    }
    unsigned int max = b;
        if (a > b)
                max = a;
        while(1)
    {
            if (max % a == 0 && max % b == 0)
                    return max;
           max++;
    }
}
int main() {
    printf("%u\n", lcm(12, -18)); // output: 36
    printf("%u\n", lcm(7, 9));   // output: 63
    printf("%u\n", lcm(0, 5));   // output: 0
    return 0;
}