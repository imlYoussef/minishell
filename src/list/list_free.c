#include "list.h"
#include <stddef.h>
#include <stdlib.h>

void	list_free(void **list, void (*f)(void *))
{
	t_list	*next;
	t_list	*current;

	if (!list)
		return ;
	current = *list;
	while (current)
	{
		next = current->next;
		if (f)
			f(current);
		free(current);
		current = next;
	}
	*list = NULL;
}
