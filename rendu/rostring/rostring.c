#include <unistd.h>

int ft_blanck(char c)
{
	if (c == ' ' || c == '\t')
		return 1;
	return 0;
}
void rostring (char *s)
{
	int i =0;
	int j = 0;
	while (s[i])
	{
		while (ft_blanck(s[i]))
			i++;
		if (s[i] && !ft_blanck(s[i]))
		{
			if (j == 0)

				while (s[i] && !ft_blanck(s[i++]))
					j++;
			else
			{
				while (s[i] && !ft_blanck(s[i]) && write(1,&s[i++],1));
				write(1, " ",1);
			}
		}
	}
	 i = 0;
	while (ft_blanck(s[i]))
		i++;
	while (j--)
	{
		write(1,&s[i],1);
		i++;
	}
}
int main(int ac,char **av)
{
	if (ac > 1 && *av[1])
		rostring(av[1]);
	write(1,"\n",1);
}


