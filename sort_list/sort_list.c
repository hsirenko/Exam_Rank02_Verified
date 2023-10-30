
#include "list.h"
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct s_list t_list;
//
//struct s_list {
//	int data;
//	t_list *next;
//};

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int swap;
	t_list 	*tmp;

	tmp = lst;
	while (lst && lst->next)
	{
		if (cmp(lst->data, lst->next->data) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;

		}
		else
			lst = lst->next;

	}
	lst = tmp;
	return(lst);
}

//int ascending(int a, int b)
//{
//	return (a <= b);
//}
//
//int main()
//{
//	t_list *lst3 = malloc(sizeof(t_list));
//	lst3->data = 25;
//	lst3->next = NULL;
//
//	t_list *lst2 = malloc(sizeof(t_list));
//	lst2->data = 35;
//	lst2->next = lst3;
//
//	t_list *lst1 = malloc(sizeof(t_list));
//	lst1->data = 45;
//	lst1->next = lst2;
//
//	t_list *result;
//	result = sort_list(lst1, ascending);
//
//
//	while (result != NULL)
//	{
//		printf("list: %d\n", result->data);
//		result = result->next;
//	}
//
//	free(lst1);
//	free(lst2);
//	free(lst3);
//
//}