#include <unistd.h>

int main(int ac,char **av)
{
	if (ac == 3)
	{
		int i = 0;
		int j = 0;

		while (av[1][i])
		{
			int k = 0;
			int dup = 0;
			while (k < i)
			{
				if (av[1][k] == av[1][i])
				{
					dup = 1;
					break;
				}
				k++;
			}
			if (!dup)
			{
				j = 0;
				while (av[2][j])
				{
					if (av[1][i] == av[2][j])
					{
						write(1,&av[1][i],1);
						break;
					}
					j++;
				}
			}
			i++;
		}
		write(1,"\n",1);
	}
	else
		write(1,"\n",1);
}

