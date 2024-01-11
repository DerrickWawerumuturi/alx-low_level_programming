#include "lists.h"

/**
 *print_dlistint - prints element of a list
 * @h: pointer to head
 * Return: nuber of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
    int node_count = 0;
    const dlistsint_t *trave = h

    while (trave != NULL)
    {
        printf("%d\n", trave->n);
        trave = trave->next;
        node_count++;
    }
    return (node_count);
}