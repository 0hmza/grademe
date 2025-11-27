#include "list.h"
#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int temp;
	temp =  *a;
	*a = *b;
	*b = temp;
}
int ascending(int a,int b)
{
	return (a <= b);
}
t_list	*sort_list(t_list *lst, int (*cmp)(int ,int))
{
	t_list	*begin;
	t_list	*p;

	begin = lst;
	while (lst)
	{
		p = lst->next;
		while (p)
		{
			if (!(*cmp)(lst->data ,p->data))
			{
				ft_swap(&lst->data, &p->data);
			}
			p = p->next;
		}
		lst = lst->next;
	}
	return (begin);
}
