#include <unistd.h>

int main(int ac,char **av)
{
	if (ac == 1)
	{
		write(1,"Hello World!\n",13);
	}
}
