#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to first node
 * Return:number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head, *temp = NULL;
	size_t id = 0;

	if (current == NULL)
		exit(98);
	while (current != NULL)
	{
		temp = current;
		current =  current->next;
		id++;
		printf("[%p] %d\n", (void *)temp, temp->n);
		if (temp < current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}

	}
	return (id);
}
