#include "list.h"
#include <stddef.h>

void	*list_at(void *list, int index)
{
	int		position;
	t_list	*current;

	position = 0;
	current = list;
	while (current && position < index)
	{
		current = current->next;
		position++;
	}
	return (current);
}

void	*list_tail(void *list)
{
	t_list	*current;

	current = list;
	if (!current)
		return (NULL);
	while (current->next)
		current = current->next;
	return (current);
}
