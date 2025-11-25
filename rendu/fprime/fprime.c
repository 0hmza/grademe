
#include <stdio.h>
#include <stdlib.h>

void fprime(unsigned int n)
{
	unsigned int prime;

	if(n == 1)
		printf("1");
	else
	{
		prime = 2;
		while (n > 1)
		{
			if (n % prime == 0)
			{
				printf("%d",prime);
				n /= prime;
				if(n > 1)
					printf("*");
				prime--;
			}
			prime++;
		}
	}
}
int main(int ac,char **av)
{
	if (ac == 2 && *av[1])
		fprime(atoi(av[1]));
	printf("\n");
	return 0;
}

