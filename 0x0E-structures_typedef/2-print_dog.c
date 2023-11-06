#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints content of dog
 * @d:struct contaaining content
 * Return:void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("nil");
		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("nil");
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("nil");
	}
}
