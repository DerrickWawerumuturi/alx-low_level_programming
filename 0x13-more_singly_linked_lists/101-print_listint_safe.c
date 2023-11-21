#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the head of the linked list
 * Return: the number of nodes int list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *now = head, *before = NULL;
	size_t id;

	if (now == NULL)
		exit(98);

	while (now != NULL)
	{
		before = now;
		now = now->next;
		id++;
		printf("[%p] %d\n", (void *)before, before->n);

		if (before < now)
		{
			printf("->[%p] %d\n", (void *)now, now->n);
			break;
		}
	}
	return (id);
}
