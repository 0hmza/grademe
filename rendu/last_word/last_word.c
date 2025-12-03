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
	while (s[i])
		i++;
	i--;
	while ( f(s[i]) == 1)
		i--;
	while (i >= 0 && (f(s[i]) != 1))
		i--;
	i++;
	while (s[i] && f(s[i]) != 1)
	{
		write(1,&s[i],1);
		i++;
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
