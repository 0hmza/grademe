#include <stdio.h>
#include <stdlib.h>

int main(int ac,char **av)
{
	if (ac == 4)
	{
		long num1 = atoi(av[1]);
		long num2 = atoi(av[3]);
		long total;
		if (av[2][0] == '+')
			total = num1 + num2;
		else if (av[2][0] == '*')
			total = num1 * num2;
		else if (av[2][0] == '/')
			total = num1 / num2;
		else if (av[2][0] == '-')
			total = num1 - num2;
		printf("%ld",total);
		printf("\n");
	}
	else
		printf("\n");
}

