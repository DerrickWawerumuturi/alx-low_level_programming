#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns sum
 * @n:counts the number of args
 * @...:arguments
 * Return:sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int s;

	va_list args;

	va_start(args, n);

	s = 0;

	if (n == 0)
	{
		va_end(args);
		return (0);
	}

	for (i = 0 ; i < n ; i++)
	{

		int x = va_arg(args, int);

		s += x;
	}

	va_end(args);
	return (s);

}
