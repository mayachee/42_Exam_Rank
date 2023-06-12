#include <stdio.h>

int ft_atoi_base(const char *str, int str_base) {
    int result = 0;
    int sign = 1;
    int digit_value;
    int i = 0;

    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    while (*str)
    {
        digit_value = -1;
        i = 0;
        while (i < str_base && digit_value == -1)
        {
            if (*str == "0123456789abcdef"[i]
                || *str == "0123456789ABCDEF"[i])
                digit_value = i;
            i++;
        }
        if (digit_value == -1)
            break;
        result = result *  str_base + digit_value;
        str++;
    }
    return (sign * result);
}


int main() {
    char str1[] = "10";      // binary number
    char str2[] = "7b";      // hexadecimal number
    char str3[] = "-10101";  // binary number with negative sign
    char str4[] = "2147483647"; // maximum value for a 32-bit integer
    char str5[] = "2147483648"; // larger than maximum value for a 32-bit integer
    
    int result1 = ft_atoi_base(str1, 2);
    int result2 = ft_atoi_base(str2, 16);
    int result3 = ft_atoi_base(str3, 2);
    int result4 = ft_atoi_base(str4, 10);
    int result5 = ft_atoi_base(str5, 10);
    
    printf("%s in base 2 is %d in base 10\n", str1, result1);
    printf("%s in base 16 is %d in base 10\n", str2, result2);
    printf("%s in base 2 is %d in base 10\n", str3, result3);
    printf("%s in base 10 is %d in base 10\n", str4, result4);
    printf("%s in base 10 is %d in base 10\n", str5, result5);
    
    return 0;
}


