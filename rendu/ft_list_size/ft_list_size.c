

typedef struct s_list
{
	struct s_list	*next;
	void *data;
}	t_list;

int ft_list_size(t_list	*begin_list)
{
	int total;

	t_list	*p;
	p = begin_list;
	while (p)
	{
		total++;
		p = p->next;
	}
	return total;
}
