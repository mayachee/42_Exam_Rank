#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 10
#endif

int	str_len(char *s)
{
	int	len;

	len = 0;
	if (!s)
		return (0);
	while (s[len])
		len++;
	return (len);
}

char	*str_chr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}

char	*str_join(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	j = 0;
	i = 0;
	str = malloc(sizeof(char) * (str_len(s2) + str_len(s1) + 1));
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

char	*ft_lessen(char *buff)
{
	char	*block;
	int		i;
	int		len;

	len = 0;
	i = 0;
	if (!buff[i])
		return (NULL);
	while (buff[len] && buff[len] != '\n')
		len++;
	block = malloc((len + 2) * sizeof(char));
	if (!block)
		return (NULL);
	while (buff[i] && buff[i] != '\n')
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

char	*ft_spanen_lessen(char *utopia, int fd)
{
	int		due;
	char	*buff;

	buff = (char *)malloc(BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	due = 1;
	while (!str_chr(utopia, '\n') && due != 0)
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
	char	*vagabond;
	int		len;
	int		molphy;

	molphy = 0;
	len = 0;
	while (buff[len] && buff[len] != '\n')
		len++;
	if (!buff[len] || (buff[len] == '\n' && buff[len + 1] == '\0'))
	{
		free(buff);
		return (NULL);
	}
	vagabond = (char *)malloc(str_len(buff) - len);
	if (!vagabond)
		return (NULL);
	len++;
	while (buff[len])
    {
		vagabond[molphy] = buff[len];
        molphy++;
        len++;
    }
	vagabond[molphy] = '\0';
	free(buff);
	return (vagabond);
}

char	*get_next_line(int fd)
{
	char		*tento;
	static char	*buffer;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	buffer = ft_spanen_lessen(buffer, fd);
	if (!buffer)
		return (NULL);
	tento = ft_lessen(buffer);
	buffer = ft_clean(buffer);
	return (tento);
}