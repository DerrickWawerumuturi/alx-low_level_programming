#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to the duplicate string
 * @str:pointer to memory with duplicate
 * Return:str on (success) and NULL  on failure
 */

char *_strdup(char *str)
{
	char *ptr;

	if (str == NULL)
		return (NULL);

	ptr = (char *)malloc(strlen(str) + 1);

	if (ptr == NULL)
		return (NULL);
	strcpy(ptr, str);

	return (ptr);
}
