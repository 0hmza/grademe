#include <unistd.h>

void ft_putnbr(int nb)
{
	long n = nb;
	char box[10];
	int i = 0;

	if (n == 0)
	{
		write (1,"0",1);
		return ;
	}
	while (n > 0)
	{
		box[i] = n % 10 + '0';
		n /= 10;
		i++;
	}
	while (i--)
		write(1,&box[i],1);
}
int main(int ac,char **av)
{
	if (ac > 1)
	{
		int i = 0;
		int j = 1;
		while (av[j])
		{
			j++;
		}
		ft_putnbr(j - 1);
	}
	else
		ft_putnbr(0);
		write(1,"\n",1);
}

