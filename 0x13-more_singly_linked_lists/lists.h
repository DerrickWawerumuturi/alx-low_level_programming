#ifndef LISTS_H
#define LISTS_H


#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* data structure for project */

/**
 * struct listint_s - singly linked list
 * @n:integer
 * @next:points to next node
 *
 * Description: singly linked list node structure
 *
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* prototypes */
size_t print_listint(const listint_t *h);

#endif
