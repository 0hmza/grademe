#include <stdio.h>
#include <stdlib.h>
int *ft_range(int start,int end)
{
	int i;
	int *new;
	int len;

	i = 0;
	if (start <= end)
		len = end - start+ 1;
	else
		len = start - end + 1;

	new = malloc(sizeof(int) * len);
	if (!new)
		return 0;
	if (start <= end)
	{
		i = 0;
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
