#include <unistd.h>

int main(int ac,char **av)
{
	int i = 0, j = 0;
	if (ac > 1)
	{
		while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
			i++;
		j = i;
		while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
			i++;
		int k = i;
		int first = 1;
		while (av[1][i])
		{
				while (av[1][i] == ' ' || av[1][i] == '\t')
					i++;
				if (!av[1][i])
					break;
				if (!first)
					write(1," ",1);
				first = 0;
				int t = i;
				while (av[1][t] && av[1][t] != ' ' && av[1][t] != '\t')
					t++;
				write(1,av[1] + i,t - i);
				i = t;
		}
		if (k - j > 0)
		{
			if (!first)
				write(1," ",1);
		write(1,av[1] + j , k-j);
		}
		write(1,"\n",1);
	}
	else
		write(1,"\n",1);
}

