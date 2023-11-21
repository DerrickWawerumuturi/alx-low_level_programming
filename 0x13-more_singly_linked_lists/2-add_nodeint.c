#include "lists.h"

/**
 * add_nodeint - adds node at beginning of list
 * @head:start of the list
 * @n: node to be added
 * Return: item in node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *store = NULL, *storeaddress = NULL;

	store = malloc(sizeof(listint_t));
	if (store == NULL)
		return (NULL);
	storeaddress = store;
	store->next = NULL;
	store->n = n;
	store->next = *head;
	*head = storeaddress;

	return (*head);
}
