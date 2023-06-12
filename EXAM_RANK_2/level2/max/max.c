int max( int *tab, unsigned int len)
{
    int i = 0;
    int res = tab[0];
    while (i <= len)
    {
        if (tab[i] > res)
            res = tab[i];
        i++;
    }
    return(res);
}

#include <stdio.h>

int main() {
    int arr[] = {3, 9, 2, 7, 555, 5, 99999};
    unsigned int arr_len = sizeof(arr) / sizeof(int);
    int max_num = max(arr, 7);
    printf("The maximum number in the array is %d\n", max_num);
    return 0;
}