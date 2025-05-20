#include "list.h"

int	list_length(void *list)
{
	int		length;
	t_list	*current;

	length = 0;
	current = list;
	while (current)
	{
		current = current->next;
		length++;
	}
	return (length);
}
