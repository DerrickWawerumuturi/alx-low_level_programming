#ifndef MAIN_H
#define MAIN_H
/* libraries required */
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/* structure of list_t */
/**
 * struct list_t - structure of list_t
 * @str: data of node
 * @len: length of string
 * @next: pointer to the next node
 */
typedef struct list_t
{
	char *str;
	unsigned int len;
	struct list_t *next;
} list_t;

/*  prototypes */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif
