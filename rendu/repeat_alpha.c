
#include <stdio.h>
#include <unistd.h>

int main(int ac,char **av)
{
	if (ac == 2)
	{
		int i = 0;
		int count = 0;
		while (av[1][i])
		{
		if (av[1][i] >= 'a' && av[1][i] <= 'z') 

			{
				count = av[1][i] - 'a' + 1;
			}
		else if(av[1][i] >= 'A' && 
						av[1][i] <= 'Z')
			{
			
				count = av[1][i] - 'A' + 1;
			}
		while (count)
		{
			write (1,&av[1][i],1);
			count--;
		}
		i++;
		}
		write (1,"\n",1);
	}
	else
		write(1,"\n",1);
}

