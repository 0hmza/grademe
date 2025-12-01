#include <stdio.h>

int pgcd(unsigned int num1, unsigned int num2)
{
	int i = num1;
	while (i > 0)
	{
		if ((num1 % i == 0)  && (num2 % i == 0))
			return i;
		
		i--;
	}
	return 1;
}
unsigned int lcm(unsigned int a, unsigned int b)
{
	int total = 0;
	if (a == 0 || b == 0)
		return (0);
	if (a > 0 && b > 0)
	{
		total = (a * b) / pgcd(a,b);
	}
	return total;
}
/*
int main()
{
	printf("%d",lcm(42,4));
}
*/
