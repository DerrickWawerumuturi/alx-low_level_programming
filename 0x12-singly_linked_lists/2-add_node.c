#include "lists.h"

/**
 * add_node - adds n anode
 * @head: original linked list
 * @str:string to be added
 * Return:address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *store;
	int count = 0;

	store = malloc(sizeof(list_t));
	if (store == NULL)
		return (NULL);
	while (str[count])
		count++;
	store->len = count;
	store->str = strdup(str);
	store->next = *head;
	*head = store;
	return (store);
}
