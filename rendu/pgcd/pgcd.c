#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int pgcd(unsigned int num1,unsigned int num2)
{
		int i = num1;
		while (i > 0)
		{
			if ((num1 % i == 0) && (num2 % i == 0))
				return i;
			i--;
		}
		return 1;
}
int main(int ac,char **av)
{
	if (ac == 3)
	{
		printf("%d",pgcd(atoi(av[1]),atoi(av[2])));
		printf("\n");
	}
	else
		printf("\n");
}

