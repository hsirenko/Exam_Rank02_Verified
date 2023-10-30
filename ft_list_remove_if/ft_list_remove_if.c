#include "ft_list.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list == NULL || *begin_list == NULL)
		return ;

	t_list *cur = *begin_list;
	if (cmp(cur->data, data_ref) == 0)
	{
		*begin_list = cur->next;
		free(cur);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	cur = *begin_list;
	ft_list_remove_if(&cur->next, data_ref, cmp);
}

//void print_list(t_list **begin_list)
//{
//	t_list *cur = *begin_list;
//	while (cur)
//	{
//		printf("List el: %s\n", (char *)cur->data);
//		cur = cur->next;
//	}
//}
//
//int main()
//{
//	char straa[] = "String aa";
//	t_list *aa = malloc(sizeof(t_list));
//	aa->next = 0;
//	aa->data = straa;
//
//	char strbb[] = "String bb";
//	t_list *bb = malloc(sizeof(t_list));
//	bb->next = 0;
//	bb->data = strbb;
//
//	char strcc[] = "String cc";
//	t_list *cc = malloc(sizeof(t_list));
//	cc->next = 0;
//	cc->data = strcc;
//
//	char strdd[] = "String dd";
//	t_list *dd = malloc(sizeof(t_list));
//	dd->next = 0;
//	dd->data = strdd;
//
//	aa->next = bb;
//	bb->next = cc;
//	cc->next = dd;
//
//	t_list **without_naughty_toy = &aa;
//
//	print_list(without_naughty_toy);
//	printf("-------\n");
//	ft_list_remove_if(without_naughty_toy, straa, strcmp);
//	print_list(without_naughty_toy);
//}