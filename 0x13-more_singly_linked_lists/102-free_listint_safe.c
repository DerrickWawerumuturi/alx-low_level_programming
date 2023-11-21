#include "lists.h"

/**
 * free_listint_safe - frees listint_t list
 * @h: to be fred
 * Return:size that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *before = *h;
	size_t size = 0;

	while (before != NULL)
	{
		*h = before->next;
		free(before);
		before = *h;
		size++;
	}
	before = NULL;
	*h = NULL;
	return (size);
}
