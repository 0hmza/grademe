#include <unistd.h>

int check(char c)
{
	if (c == ' ' ||c == '\t')
		return 1;
	return 0;
}
void display(char *s)
{
	int i = 0;
	int start,end;
	while (s[i])
		i++; // go to end of string
	i--;//last char
	while (i >= 0)
	{
		//skip spaces going backwords
		while (i >= 0 && (check(s[i]) == 1))
			i--;
		if (i < 0)
			break;
		end = i + 1;
		//find start of word
		while (i >= 0 && check(s[i]) != 1)
			i--;
		start = i + 1;
		while (start < end)
		{
			write(1,&s[start],1);
			start++;
		}
		if (i >= 0)
			write(1," ",1);//print a space if another word exists
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
