#include <stdli.h>


int *ft_range(int start,int end)
{
	int *new;
	int size;

	if (start > end)
		size = start - end + 1;
	else
		size = end - start + 1;
	new = malloc(sizeof(int) * size);
	if (!new)
		return 0;
	if (start <= end)
	{
		int i = 0;
		while (start <= end)
		{
			new[i] = start;
			i++;
			start++;
		}
	}
	else
	{
		while (start >= end)
		{
			new[i] = start;
			i++;
			start--;
		}
	}
	return (new);
}

