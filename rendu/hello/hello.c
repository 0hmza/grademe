#include <unistd.h>

int main(int ac,char **av)
{
	if (ac == 1)
	{
		write(1,"Hello Word!\n",12);
	}
}
