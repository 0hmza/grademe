#include <unistd.h>

int	already_printed(char *s, int j)
{
	int i = 0;
	while (i < j)
	{
		if (s[i] == s[j])
			return 1;
		i++;
	}
	return (0);
}
int exist(char c, char *s)
{

	int i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return 1;
		i++;
	}
	return (0);
}
int main(int ac, char **av)
{
	if (ac == 3)
	{
		int i =0;
		while (av[1][i])
		{
			if (!already_printed(av[1],i) && exist(av[1][i],av[2]))
				write(1,&av[1][i],1);
			i++;
		}
		write(1,"\n",1);
	}
	else
		write(1,"\n",1);
}
