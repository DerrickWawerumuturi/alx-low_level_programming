#include "lists.h"

/**
 * free_listint_safe - frees listint_t list
 * @h: to be fred
 * Return:size that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *now, *before;
	size_t size = 0;

	if (h == NULL || *h == NULL)
		return (0);
	now = *h;

	while (now != NULL)
	{
		size++;
		if (now < now->next)
		{
			*h = NULL;
			return (size);
		}
		before = now;
		now = now->next;
		free(before);
	}
	*h = NULL;
	return (size);
}
