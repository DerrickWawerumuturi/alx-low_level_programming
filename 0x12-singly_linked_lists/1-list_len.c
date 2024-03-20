#include "lists.h"
/**
 * list_len -returns length of linked list
 * @h:elements in list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t num_elm = 0;

	while (h)
	{
		h = h->next;
		num_elm++;
	}
	return (num_elm);
}
