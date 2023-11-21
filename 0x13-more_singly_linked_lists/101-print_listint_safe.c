#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the head of th liked list
 * Return: the number of nodes int he list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	long int back;

	while (head)
	{
		back = head - head->next;
		node_count++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (back > 0)
			head = head->next;
		else
		{
			printf("->[%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (node_count);
}
