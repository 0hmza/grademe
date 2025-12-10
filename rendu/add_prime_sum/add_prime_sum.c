#include <unistd.h>

int fatoi(char *s)
{
	int i = 0;
	int j = 1;
	int r = 0;

	while ((s[i] >= 9 && s[i] <= 13) || s[i] == ' ')
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			j = j * (-1);
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		r = r * 10 + s[i] - '0';
		i++;
	}
	return (j * r);
}
int fprime(int n)
{
	if (n < 2)
		return 0;
	int i = 2;
	while (i * i <= n)
	{
		if (n % i == 0)
			return 0;
		i++;
	}
	return 1;
}
void fput(int nb)
{
	char box[12];
	int i = 0;
	while (nb > 0)
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
	if (ac == 2)
	{
		int num = fatoi(av[1]);
		int total = 0;
		int i = 2;
		while (i <= num)
		{
			if (fprime(i))
				total += i;
			i++;
		}
		fput(total);
	write(1,"\n",1);
	}
	else
		write(1,"0\n",2);
}

