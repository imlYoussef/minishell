#include "list.h"
#include <stddef.h>

void	list_insert(void **list, void *node)
{
	t_list	*new;

	if (!list || !node)
		return ;
	new = node;
	new->next = *list;
	*list = new;
}

void	*list_shift(void **list)
{
	t_list	*head;

	if (!list || !*list)
		return (NULL);
	head = *list;
	*list = head->next;
	return (head);
}
