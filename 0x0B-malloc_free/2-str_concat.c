#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - returns concentated string
 * @s1:first string
 * @s2:second string
 * Return:ptr on success and NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, dis1, dis2;
	char *ptr;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	for (dis1 = 0; s1[dis1] != '\0' ; dis1++)
		;
	for (dis2 = 0; s2[dis2] != '\0' ; dis2++)
		;

	ptr = (char *)malloc((dis1 + dis2 + 1) * sizeof(*ptr));

	dis1 = 0;
	dis2 = 0;

	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; s1[dis1] != '\0' ; i++, dis1++)
		ptr[i] = s1[dis1];
	for (j = 0 ; s2[dis2] != '\0' ; j++, dis2++)
	{
		ptr[i] = s2[dis2];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
