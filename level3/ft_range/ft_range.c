#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int i = 0;
  	int len = abs((end - start)) + 1;
  	int *res; 
  	res = (int *)malloc(sizeof(int) * len);
  
  	while (i < len)
  	{
    	  if (start < end)
    	  {
		  res[i] = start;
		  start++;
    		  i++;
          }
        else
        {
                res[i] = start;
                start--;
                i++;
        }
  	}
  	return (res);
}

#include <stdio.h>
int     main(void)
{
    int *arr1 = ft_range(1, 3);
    for (int i = 0; i < 3; i++)
        printf("%d ", arr1[i]);
    printf("\n");
}