#include <unistd.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
	char *new;
	int i = 0;
	while (src[i])
		i++;
	new = (char *)malloc(sizeof(char) * (i + 1));
	if (!new)
		return (NULL);
	int j = 0;
	while (src[j])
	{
		new[j] = src[j];
		j++;
	}
	new[j] = '\0';
	return new;
}
