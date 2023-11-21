#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the head of th liked list
 * Return: the number of nodes int he list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *back, *front;
	size_t node_count = 0;

	back = head;
	front = head;

	while (back != NULL && front != NULL && front->next != NULL)
	{
		printf("[%p] %d\n", (void *)back, back->n);
		node_count++;

		back = back->next;
		front = front->next->next;
		if (back == front)
		{
			printf("-> [%p] %d\n", (void *)back, back->n);
			exit(98);
		}
	}
	return (node_count);
}
