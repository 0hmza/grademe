#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int pgcd(unsigned num, unsigned int num1)
{
	unsigned int i;

	i  = num;
	while (num > 0)
	{
		if ((num % i == 0) && (num1 % i == 0))
			return i;
		i--;
	}
	return 0;
}

int main(int ac,char **av)
{
	if ( ac == 3)
	{
		int num = atoi(av[1]);
		int num1 = atoi(av[2]);
		if (num < 0 || num1 < 0)
			printf("0");
		else
		{
			printf("%d",pgcd(atoi(av[1]),atoi(av[2])));
			printf("\n");
		}
	}
	else
		printf("\n");
		return 0;
}

