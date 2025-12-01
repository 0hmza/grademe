#include <unistd.h>
int ft_putnbr(int nb)
{
	if (nb == 0)
	{
		write(1,"0",1);
	}
	int i = 0;
	char box[12];
	while (nb >0 )
	{
		 box[i] = nb % 10 + '0';
		nb /= 10;
		i++;
	}
	while (i--)
		write(1,&box[i],1);
}

int main(int ac,char **av)
{
	if (ac == 1)
	{
		int i = 0;
		while (i <= 100)
		{
			if ((i % 3 == 0) && (i % 5) == 0)
				write(1,"fizzbuzz\n",9);
			else if (i  % 3 == 0)
				write(1,"fizz\n",5);
			else if( i % 5 == 0)
				write(1,"buzz\n",5);
			else
			{
				ft_putnbr(i);
				write(1,"\n",1);
			}
			i++;
		}

	}
	else
		write(1,"\n",1);
}
