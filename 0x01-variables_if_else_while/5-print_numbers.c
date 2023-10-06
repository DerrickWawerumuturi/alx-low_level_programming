#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - entry point of program
 * Return:always 0
 */
int main(void)
{
	int i;
	
	for (i = 0; i < 10; i++)
		printf("%d", i);
	printf("\n");
	return (0);
}
