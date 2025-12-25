#include <unistd.h>
#include <stdio.h>
#include <limits.h>
unsigned int pgcd(unsigned int num, unsigned int num1)
{
	unsigned int i = num;

	while (i > 0)
	{
		if (num % i == 0 && num1 % i == 0)
			return i;
		i--;
	}
	return 1;
}
int ft_atoi(char *s)
{
	int i = 0, r = 0, d = 1;

	while ((s[i] >= 9 && s[i] <= 13) || s[i] == ' ')
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			d = d * (-1);
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		r = r * 10 + s[i] - '0';
		i++;
	}
	return d * r;
}
int main(int ac ,char **av)
{
	if (ac == 3)
	{
		int a = ft_atoi(av[1]);
		int b = ft_atoi(av[2]);
		if (a < 0 || b < 0 || a > INT_MAX || b > INT_MAX)
			return 0;
		printf("%d\n",pgcd(a,b));
	}
	else
		write(1,"\n",1);
}
