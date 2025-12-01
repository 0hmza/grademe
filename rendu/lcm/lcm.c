#include <stdio.h>
#include <limits.h>
int pgcd(unsigned int num1, unsigned int num2)
{
	unsigned int i = num1;
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
	unsigned int total = 0;
	if (a == 0 || b == 0 || a > INT_MAX || b > INT_MAX)
		return (0); 
	total = (a * b) / pgcd(a,b);
	return total;
}

int main()
{
	printf("%d",lcm(-4,2932));
}

