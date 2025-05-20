#include "list.h"
#include <stddef.h>

int	list_any(void *list, int (*p)(void *, int))
{
	int		index;
	t_list	*current;

	if (!list || !p)
		return (0);
	index = 0;
	current = list;
	while (current)
	{
		if (p(current, index))
			return (1);
		current = current->next;
		index++;
	}
	return (0);
}

int	list_every(void *list, int (*p)(void *, int))
{
	int		index;
	t_list	*current;

	if (!list || !p)
		return (0);
	index = 0;
	current = list;
	while (current)
	{
		if (!p(current, index))
			return (0);
		current = current->next;
		index++;
	}
	return (1);
}
