#include <unistd.h>
#include <stdio.h>


int spac(char c)
{
	if (c == ' ' || c == '\t')
		return 1;
	return 0;
}
char to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return ( c + 32);
	return c;
}
char to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
void ft_putchar(char c)
{
	write (1,&c,1);
}
int main(int ac,char **av)
{	
	if (ac > 1)
	{
		int i = 1;
		char prev;
		while (i < ac)
		{
			int j = 0;
			prev = ' ' ;
			while (av[i][j])
			{
				if (spac(av[i][j]))
				{
					ft_putchar(av[i][j]);
				}
				else
				{
					if (spac(prev))
					{
						ft_putchar(to_upper(av[i][j]));
			
					}
					else 
					{
					ft_putchar(to_lower(av[i][j]));
					}
			
				}
				prev = av[i][j];
				j++;
			}
			i++;
			write (1,"\n",1);
		}
	}
	else
		write(1,"\n",1);
}
