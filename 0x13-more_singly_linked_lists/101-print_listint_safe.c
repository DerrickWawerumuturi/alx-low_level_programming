#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to first node
 * Return:number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	size_t id;
	const listint_t *back[1024];

	while (head != NULL)
	{
		for (id = 0; id < node_count; id++)
		{
			if (head == back[id])
			{
				printf("[%p] %d\n", (void *)head, head->n);
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (node_count);
			}
		}
		back[node_count++] = head;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	return (node_count);
}
