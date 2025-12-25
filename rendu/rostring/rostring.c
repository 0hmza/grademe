#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
char **ft_split(char *s)
{
	int i = 0,j = 0, k =0;
	char **box = malloc(sizeof(char *) * 2096);
	if (!box)
		return NULL;
	while (s[i])
	{
		while (s[i] && s[i] <= 32)
			i++;
		if (!s[i])
			break;
		box[j] = malloc(4096);
		if (!box[j])
			return NULL;
		k = 0;
		while (s[i] && s[i] > 32)
			box[j][k++] = s[i++];
		box[j][k] = '\0';
		j++;
	}
	box[j] = NULL;
	return box;
}
int ft_strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return i;
}
int main(int ac, char **av)
{
	if (ac >= 2)
	{
		char **r = ft_split(av[1]);
		int i = 1;
		while (r[i])
		{
			write(1,r[i],ft_strlen(r[i]));
			write(1,(" "),1);
			i++;
		}
		write(1,r[0],ft_strlen(r[0]));
		write(1,"\n",1);
	}
	else
		write(1,"\n",1);
}
