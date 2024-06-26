#include "search_algos.h"

/**
 * binary_search - uses binary search algorithm to find
 * a specific value in a sorted array
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index of the value (success) or -1 (failure)
*/

int binary_search(int *array, size_t size, int value)
{
	int low  = 0;
	int high = size - 1;
	int mid = 0;
	int i = 0;

	if (array == NULL)
	{
		return (-1);
	}
	while (low <= high)
	{
		mid =  low + (high - low) / 2;
		printf("Searching in array:");
		for (i = low; i <= high; i++)
		{
			printf(" %d", array[i]);
			if (i < high)
			{
				printf(",");
			}
		}
		printf("\n");
		if (array[mid] == value)
		{
			return (mid);
		}

		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}

	}
	return (-1);
}
