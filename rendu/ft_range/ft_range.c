#include <stdio.h>
#include <stdlib.h>
int *ft_range(int start,int end)
{
	int i;
	int *new;
	int len;

	i = 0;
	len = end - start;
	new = malloc(sizeof(int) * len);
	if (!new)
		return 0;
	if (start >= end)
		return (0);
	i = 0;
	while (start < end)
	{
		new[i] = start;
		i++;
		start++;
	}
	return (new);
}
