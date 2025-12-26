#include <unistd.h>

int main(int ac,char **av)
{
	if (ac == 3)
	{
		char box[256] = {0};
		int i = 0;
		while (av[1][i])
		{
			if (!box[(unsigned char)av[1][i]]++)
				write(1,&av[1][i],1);	
			i++;
		}
		int j = 0;
		while (av[2][j])
		{
			if (!box[(unsigned char)av[2][j]]++)
				write(1,&av[2][j],1);
			j++;
		}
		write(1,"\n",1);
	}
	else
		write(1,"\n",1);
}


