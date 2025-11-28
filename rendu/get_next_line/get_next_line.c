#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
#ifndef BUFFER_SIZE
#define BUFFER_SIZE 42
#endif


char	*ft_strchr(const char *str, int c)
{
	int i = 0;
	if (!str)
		return (NULL);
	while(str[i] != (char)c)
	{
		if (str[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)&str[i]);
}
size_t	ft_strlen(char *s)
{
	size_t i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return i;
}
char *ft_strdup(char *s)
{
	char *new;
	int i = 0;
	if (!s)
		return (NULL);
	int len = ft_strlen(s);
	new = malloc(sizeof(char) * len + 1);
	if (!new)
		return (NULL);
	while (s[i])
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
char *ft_strjoin(char *s1,char *s2)
{
	if (!s1 && !s2)
		 return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	char *new;
	int len1 = ft_strlen(s1);
	int len2 = ft_strlen(s2);
	new = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!new)
		return (NULL);
	int i = 0;
	while (s1 && s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	int j = 0;
	while (s2[j])
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	new[i] = '\0';
	free(s1);
	return (new);
}
char *get_line(char *s)
{
	if (!s)
		return (NULL);
	int len = 0;
	while (s[len] && s[len] != '\n')
		len++;
	char *box = malloc((len + 2) * sizeof(char));
	if (!box)
		return (NULL);
	int i = 0;
	while (s[i] && s[i] != '\n')
	{
		box[i] = s[i];
		i++;
	}
	if (s[i] == '\n')
		box[i++] = '\n';
	box[i] = '\0';
	return (box);
}
char *free_s(char *s)
{
	int len = 0;
	while (s[len] && s[len] != '\n')
		len++;
	if (!s[len] || (s[len] == '\n' && s[len + 1] == '\0'))
	{
		free(s);
		return (NULL);
	}
	if (s[len] == '\n')
		len++;
	char *new = malloc(ft_strlen(s) - len + 1);
	if (!new)
		return (NULL);
	int i = 0;
	while (s[len] && s[len] != '\n')
	{
		new[i] = s[len];
		i++;
		len++;
	}
	new[i] = '\0';
	free(s);
	return (new);
}
char *take(int fd,char *s)
{
	int rp = 1;
	char *buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	while (!ft_strchr(s,'\n') && rp > 0)
	{
		rp = read(fd, buffer,BUFFER_SIZE);
		if (rp <= 0)
		{
			free(buffer);
			return (s);
		}
		buffer[rp] = '\0';
		s = ft_strjoin(s,buffer);
	}
	free(buffer);
	return (s);
}
char *get_next_line(int fd)
{
	static char *save;
	char *line;
	if (fd < 0 || fd == 1 || fd == 2 || BUFFER_SIZE <= 0)
		return (NULL);

	save = take(fd,save);
	if (!save)
		return (NULL);
	line = get_line(save);
	save = free_s(save);
	return (line);
}
/*
int main()
{
	int fd;
	fd = open("file.txt", O_RDONLY);
	char *line;
	line = get_next_line(fd);
	while (line)
	{
		printf("%s",line);
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (0);
}
*/
