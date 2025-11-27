#include <unistd.h>


void display(char *s)
{
	int i = 0;
	while (s[i])
	{
		if (s[i] == '_' && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
		{
			i++;
			s[i] = s[i] - 32;
			write(1,&s[i],1);
		}
		else
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
