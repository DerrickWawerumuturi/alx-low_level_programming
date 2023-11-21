#include "lists.h"

/**
 * listint_len -returna length of node
 * @h:pointer to node
 * Return:LENGTH OF NODE
 */

size_t listint_len(const listint_t *h)
{
	size_t len_node;

	len_node = 0;
	while (h)
	{
		if (h->n != 0)
		{
			len_node++;
		}
		h = h->next;
	}
	return (len_node);
}
