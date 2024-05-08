#include "search_algos.h"

/**
 * linear_search - Seaches for a specific value in an array
 * @array: pointer to the first element in the array
 * @size: number of elements in array
 * @value: specific item to search in the array
 * Return: the index of the value(success) or -1(failure)
 */
int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		return (-1);
	}
	for (int i = 0; (size_t)i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
