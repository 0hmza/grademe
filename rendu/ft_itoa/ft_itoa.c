#include <unistd.h>
#include <stdlib.h>

long int flen(int nb)
{
	int len = 0;
	if (nb <= 0)
		len = 1;
	while (nb)
	{
		nb /= 10;
		len++;
	}
	return(len);
}
char * display(char *box,unsigned int nb,long int len)
{
	while (nb > 0)
	{
		box[len--] = nb % 10 + '0';
		nb /= 10;
	}
	return box;
}
char *ft_itoa(int nbr)
{
	char *new;
	unsigned int n;
	long int len;

	len = flen(nbr);
	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	new[len--] = '\0';
	if (nbr == 0)
	{
		new[0] = '0';
	}
	if (nbr < 0)
	{
		n = nbr * (-1);
		new[0] = '-';
	}
	else
		n = nbr;
	new = display(new,n,len);
	return (new);
}
/*
#include <stdio.h>
int main()
{
	printf("%s\n",ft_itoa(12345));
	printf("%s\n",ft_itoa(-12345));
	printf("%s",ft_itoa(0));
}
*/



