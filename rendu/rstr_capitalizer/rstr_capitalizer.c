#include <unistd.h>

int check(char c)
{
	if (c == ' ' || c == '\t')
		return 1;
	return 0;
}
int main(int ac,char **av)
{
	if (ac == 2)
	{
		int i = 0;
		while (av[1][i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				av[1][i] += 32;
			}
			if (check(av[1][i + 1]) == 1 || av[1][i + 1] == '\0')
			{
				if (av[1][i] >= 'a' && av[1][i] <= 'z')
					av[1][i] -=32;
			}
			write(1,&av[1][i],1);
			i++;
		}
		write(1,"\n",1);
	}
	else
		write (1,"\n",1);
}
