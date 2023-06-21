#include <stdarg.h>
#include <unistd.h>

void	put_str(char *str, int *len)
{
	int i = 0;
	if (!str)
		str = "(null)";
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
		(*len)++;
	}
}

void	put_nbr(long long int nbr, int *len, int base)
{
	char base_hex[] = "0123456789abcdef";
	if (nbr < 0)
	{
		nbr = nbr * -1;
		write(1, "-", 1);
		(*len)++;
	}
	if (nbr >= base)
		put_nbr(nbr / base, len, base);
	write(1, &base_hex[nbr % base], 1);
	(*len)++;
}

int ft_printf(const char *f, ... )
{
	int i = 0;
	int len = 0;

	va_list p;
	va_start(p, f);
	while (f[i] != '\0')
	{
		if (f[i] == '%' && (f[i + 1] == 's' || f[i + 1] == 'x' || f[i + 1] == 'd'))
		{
			i++;
			if (f[i] == 'd')
			{
				put_nbr(va_arg(p, int), &len, 10);
			}
			else if (f[i] == 's')
			{
				put_str(va_arg(p, char *), &len);
			}
			else if (f[i] == 'x')
			{
				put_nbr(va_arg(p, unsigned int), &len, 16);
			}
		}
			else
				len += write(1, &f[i], 1);
		i++;
	}
	return (va_end(p), len);
}
// int main()
// {
// 	ft_printf("werfergv %d\n", 10);
// 	ft_printf("werfergv %x\n", 5489664556);
// 	ft_printf("werfergv %s\n", "derfrergeg");
// }
