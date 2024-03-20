#include "lists.h"
/**
 * add_nodeint_end - adds node at the end of list
 * @head: pointer to the first node
 * @n:node to be added
 * Return:the node added
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_end;
	listint_t *last = *head;

	node_end = malloc(sizeof(node_end));
	if (node_end == NULL)
		return (NULL);
	node_end->n = n;
	node_end->next = NULL;

	if (*head == NULL)
	{
		*head = node_end;
		return (node_end);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = node_end;
	return (node_end);
}
