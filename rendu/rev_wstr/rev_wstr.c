#include <unistd.h>
#include <stdlib.h>
int ft_strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return i;
}
char **fsplit(char *s)
{
	int i = 0,j = 0, k = 0;
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
int main(int ac,char **av)
{
	if (ac > 1)
	{
		char **re = fsplit(av[1]);
		int i = 0;
		while (re[i])
			i++;
		i--;
		while (i >= 0)
		{
			write(1,re[i], ft_strlen(re[i]));
			if (i > 0)
				write(1," ",1);
			i--;
		}
		write(1,"\n",1);
	}
	else
		write(1,"\n",1);
}

