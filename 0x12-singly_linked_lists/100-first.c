#include "lists.h"

void animals(void)__attribute__((constructor));

/**
 * animals - prints words of animals
 * my function is to be exectued without main
 */

void animals(void)
{
	printf("You're beat! and yet, you must allow, \n");
	printf("I bore my house upon my back!\n");
}
