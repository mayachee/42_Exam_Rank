#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int m = 0;
    if (start > end)
        ft_range(end, start);
    int len;
    int i = 0;
    len = end - start;
    if (len)
    {
        int *nbr = malloc(sizeof(int *) * len);
        if (!nbr)
            return NULL;
        while (start <= end)
        {
            nbr[i] = start;
            i++;
            start++;   
        }
        return nbr;
    }
    return NULL;
}

// int     *ft_range(int start, int end)
// {
//     int len = end - start + 1;
//     int i = 0;
//     int *nbr;
//     if (start > end)
//         return (ft_range(end, start));
//     nbr = (int *)malloc(sizeof(int) * len);
//     if (nbr)
//     {
//         while (start <= end)
//         {
//             nbr[i] = start;
//             i++;
//             start++;
//         }
//     }
//     return nbr;
// }




#include <stdio.h>
int     main(void)
{
    int *arr1 = ft_range(1, 3);
    for (int i = 0; i < 3; i++)
        printf("%d ", arr1[i]);
    printf("\n");
}