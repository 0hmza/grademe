#include <unistd.h>

int check(char c)
{
	if (c == ' ' || c == '\t')
		return 1;
	return 0;
}
int main(int ac,char **av)
{
	if (ac > 1)
	{
		int i = 0;
		int j = 1;
		while (j < ac)
		{
			i  = 0;
			while (av[j][i])
			{
				if (av[j][i] >= 'A' && av[j][i] <= 'Z')
				{
					av[j][i] += 32;
				}
				if (check(av[j][i + 1]) == 1 || av[j][i + 1] == '\0')
				{
					if (av[j][i] >= 'a' && av[j][i] <= 'z')
						av[j][i] -=32;
				}
				write(1,&av[j][i],1);
				i++;
			}
			write(1,"\n",1);
			j++;
		}
	}
	else
		write (1,"\n",1);
}
