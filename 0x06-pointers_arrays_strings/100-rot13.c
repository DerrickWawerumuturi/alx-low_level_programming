#include "main.h"

/**
 * rot13 - encodes string
 * @str:string to be encoded
 * Return: encoded string
 */

char *rot13(char *str)
{
	int count;

	while (str[count] != '\0')
	{
		char l = str[count];

		if ((l >= 'a' && l <= 'z')||( l >= 'A' && l <= 'Z'))
		{
			char base = (l >= 'a' && l <= 'z') ? 'a' : 'A';

			str[count] = (l - base + 13) % 26 + base;
		}
		count++;
	}
	return (str);
}
