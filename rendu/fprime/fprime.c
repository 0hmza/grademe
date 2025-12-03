#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
void prim(unsigned int num)
{
		unsigned int i;
		if (num == 1)
			printf("1");
		else
		{
			int i = 2;
			while (num > 1)
			{
				if (num % i == 0)
				{
					printf("%d",i);
					num /= i;
					if(num > 1)
						printf("*");
				}
				else
					i++;
			}
		}
}
int main(int ac,char **av)
{
	if (ac == 2)
	{
		int num = atoi(av[1]);
		int i = 0;
		if (num < 0)
		{
			printf("\n");
			return 0;
		}
		else
			prim((unsigned int)num);
			printf("\n");
	}
	else
		printf("\n");
}
