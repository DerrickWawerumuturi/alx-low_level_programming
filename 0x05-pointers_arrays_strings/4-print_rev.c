#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: represent str
 * Return: void
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (int i = length - 1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
