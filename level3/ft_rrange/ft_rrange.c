#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int len = end - start + 1;
    int i = len;
    int *nbr;
    if (start > end)
        return (ft_rrange(start, end));
    nbr = (int *)malloc(sizeof(int) * len);
    if (nbr)
    {
        while (i--)
        {
            nbr[i] = start;
            start++;
        }
    }
    return nbr;
}

// #include <stdio.h>
// int main()
// {
//     int start, end;
//     printf("Enter start and end values: ");
//     scanf("%d %d", &start, &end);

//     int *arr = ft_rrange(start, end);
//     if (arr == NULL) {
//         printf("Error: failed to allocate memory\n");
//         return 1;
//     }

//     int len = end - start + 1;
//     printf("Array: ");
//     for (int i = 0; i < len; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     free(arr);

//     return 0;
// }