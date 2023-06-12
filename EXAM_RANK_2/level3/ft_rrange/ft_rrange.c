#include <stdlib.h>

// int *ft_rrange(int start, int end)
// {
// 	int *range;
// 	int i = 0;
// 	int n = end - start + 1;

// 	if (start > end)
// 		return (ft_rrange(end, start));
// 	range = (int *)malloc(sizeof(int) * n);
// 	if (range)
// 	{
// 		while (i < n)
// 		{
// 			range[i] = end;
// 			end--;
// 			i++;
// 		}
// 	}
// 	return (range);
// }

int     *ft_rrange(int start, int end)
{
    int len = abs(end - start) +1;
    int i  = 0;
    int *str = (int *)malloc(sizeof(str) * len);
    if (!str)
        return NULL;
    while (i < len) {
        if (start > end)
        {
            str[i] = end;
            end++;
            i++;
        }
        else {
            str[i] = end;
            end--;
            i++;
        }
    }
    return str;
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
