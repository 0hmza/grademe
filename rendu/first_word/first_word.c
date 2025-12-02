#include <unistd.h>

int f(char c)
{
	if (c == ' ' || c == '\t')
		return 1;
	return 0;
}
void display(char *s)
{
	int i = 0;
    if (f(s[i]) == 1)
	{
		while (f(s[i]) == 1)
			i++;
		while (s[i])
		{
			if (f(s[i]) == 1 || s[i] == '\0')
				break;
			else
				write(1,&s[i],1);
			i++;
		}
	}
	else
	{
		i = 0;
		while (s[i])
		{
			if (f(s[i]) == 1 || s[i] == '\0')
				break;
			else
				write(1,&s[i],1);
			i++;
		}
	}
}
int main(int ac,char **av)
{
	if (ac == 2)
	{
		display(av[1]);
		write(1,"\n",1);
	}
	else
		write(1,"\n",1);
}
