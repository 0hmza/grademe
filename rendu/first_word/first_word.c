#include <unistd.h>

int pause_t(char c)
{
	if (c == ' ' || c == '\t')
		return 1;
	return 0;
}
void display(char *s)
{
	int i = 0;
	if (pause_t(s[i]) == 1)
	{
		while (pause_t(s[i]) == 1)
			i++;
		while (s[i])
		{
			if (pause_t(s[i]) == 1 || s[i] == '\0')
				break;
			else
				write(1,&s[i],1);
			i++;
		}
	}
	else
	{
		i = 0;
		while (s[i] != '\0')
		{
			if (pause_t(s[i]) == 1)
				break;
			else
				write(1,&s[i],1);
			i++;
		}
	}
}
int main(int ac,char **av)
{
	if (ac ==2)
	{
		display(av[1]);
		write(1,"\n",1);
	}
	else
		write(1,"\n",1);
}

