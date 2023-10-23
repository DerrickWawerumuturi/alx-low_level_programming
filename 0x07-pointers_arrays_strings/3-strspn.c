#include "main.h"

/**
 * _strspn -  gets the length of a prefix substring.
 * @s:character to be prefix
 * @accept:strings considered acceptable
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int count = 0;
	int match;

	while (*s)
	{
	match = 0;
	for (int i = 0; accept[i]; i++)
	{
	if (*s == accept[i])
	{
		count++;
		match = 1;
		break;
	}
	if (match == 0)
	{
	break;
	}
	s++;
	}
	return (count);
}
