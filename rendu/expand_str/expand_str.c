#include <unistd.h>

int check(char c)
{
	if (c == ' ' || c == '\t')
		return 1;
	return 0;
}
void display(char *s)
{
	int i = 0;

	while (check(s[i]))
		i++;
	while (s[i])
	{
		if (check(s[i]) == 1)
		{
			int start = i;
			while (check(s[i]) == 1)
				i++;
			int end = i;
			while (start < end)
			{
				write(1,"   ",3);
				break;
			}
		}
		
		else
		{
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
