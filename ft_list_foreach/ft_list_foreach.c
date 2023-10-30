#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *cur = begin_list;
	while (cur)
	{
		(*f)(cur->data);
		cur = cur->next;
	}
}