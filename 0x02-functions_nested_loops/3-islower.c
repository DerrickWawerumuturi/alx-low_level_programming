#include "main.h"
/*
 *  _islower - is the entryg point
 *  Return:1 or 0
 *  @c: is the parameter
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
