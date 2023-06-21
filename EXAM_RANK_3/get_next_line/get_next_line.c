#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 10
#endif

int ft_len(char *str)
{
    int i = 0;
    if (!str)
        return (0);
    while (str[i] != '\0')
        i++;
    return (i);
}

char *ft_str_char(char *str, int c)
{
    int i = 0;

    if (!str)
        return (NULL);
    while(str[i] != '\0')
    {
        if (str[i] == c)
        {
            return (&str[i]);
        }
        i++;
    }
    return (0);
}

char	*str_join(char *s1, char *s2)
{
	int	i = 0;
	int	j = 0;
	char	*str;
	str = malloc(sizeof(char) * (ft_len(s2) + ft_len(s1) + 1));
	if (!str)
		return (NULL);
	while (s1 && s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2 && s2[j])
    {
		str[i] = s2[j];
        i++;
        j++;
    }
	str[i] = '\0';
	free(s1);
	return (str);
}


char	*ft_read(char *buff)
{
	int		i = 0;
	int		len = 0;

	if (!buff[i])
		return (NULL);
	while (buff[len] != '\0' && buff[len] != '\n')
		len++;
	char *block = malloc((len + 2) * sizeof(char));
	if (!block)
		return (NULL);
	while (buff[i] != '\0' && buff[i] != '\n')
	{
		block[i] = buff[i];
		i++;
	}
	if (buff[i] == '\n')
	{
		block[i] = '\n';
		i++;
	}
	block[i] = '\0';
	return (block);
}

char	*ft_read_save(char *utopia, int fd)
{
	char *buff = (char *)malloc(BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	int due = 1;
	while (!ft_str_char(utopia, '\n') && due != 0)
	{
		due = read(fd, buff, BUFFER_SIZE);
		if (due == -1)
		{
			free(utopia);
			free(buff);
			return (NULL);
		}
		buff[due] = '\0';
		utopia = str_join(utopia, buff);
	}
	free(buff);
	return (utopia);
}

char	*ft_clean(char *buff)
{
	int		len = 0;
	int		i = 0;

	while (buff[len] != '\0' && buff[len] != '\n')
		len++;
	if (!buff[len] || (buff[len] == '\n' && buff[len + 1] == '\0'))
	{
		free(buff);
		return (NULL);
	}
	char	*vaga = (char *)malloc(ft_len(buff) - len);
	if (!vaga)
		return (NULL);
	len++;
	while (buff[len] != '\0')
    {
		vaga[i] = buff[len];
        i++;
        len++;
    }
	vaga[i] = '\0';
	free(buff);
	return (vaga);
}

char *get_next_line(int fd)
{
    if (BUFFER_SIZE <= 0 || fd < 0)
        return (NULL);
    static char *buff;
    buff = ft_read_save(buff, fd);
    if (!buff)
        return (NULL);
    char *ff;
    ff = ft_read(buff);
    buff = ft_clean(buff);
    return (ff);
}

// int main()
// {
//     int fd;

//     fd = open("t.txt", O_RDONLY);
//     printf("%s", get_next_line(fd));
// }
