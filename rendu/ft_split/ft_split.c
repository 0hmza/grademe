#include <stdio.h>
#include <stdlib.h>

char **ft_split(char *str)
{
	int i = 0,j = 0,k = 0;
	char **box = malloc(sizeof(char *) *2096);
	if (!box)
		return NULL;
	while (str[i])
	{
		while (str[i] && (str[i] <= 32 || str[i] == '\n'))
			i++;
		if (!str[i])
			break;
		box[j] = malloc(4096);
		if (!box[j])
			return NULL;
		k = 0;
		while (str[i] && str[i] > 32 && str[i] != '\n')
			box[j][k++] = str[i++];
		box[j][k] = '\0';
		j++;
	}
	box[j] = '\0';
	return box;
}
/*
int main()
{
	char **re = ft_split("hello ahmed how are u");
	int i = 0;
	while (re[i])
	{
		printf("le mot %d : '%s' \n",i,re[i]);
		i++;
	}
}
*/
