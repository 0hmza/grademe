#include <unistd.h>

int main(int ac,char **av)
{
	if ( ac == 2)
	{
		int i = 0;
		while (av[1][i])
		{
			char *temp;
			if ((av[1][i] >= 'a' && av[1][i] <= 'y') || (av[1][i] >= 'A' && av[1][i] <= 'Y'))
			{
				av[1][i] = av[1][i] + 1;
				write (1,&av[1][i],1);
			}
			if (av[1][i] == 'z')
					write(1,"a",1);
			else if(av[1][i] == 'Z')
					write(1,"A",1);
			i++;
		}
		write(1,"\n",1);
	}
	else
		write(1,"\n",1);
}
