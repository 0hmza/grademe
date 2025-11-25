
#include <stdio.h>
#include <unistd.h>

int max(int *tab,unsigned int len)
{
	int temp;
	int i = 1;
	if (!len)
		return (0);
	temp = tab[0];
	while (i < len)
	{
		if (tab[i] > temp)
		{
			temp = tab[i];
		}
		i++;
	}
	return (temp);
}
