#include "search_algos.h"

/**
 * linear_search - Seaches for a specific value in an array
 * @array: the are to search in
 * @size: number of elements in array
 * @value: specific item to search in the array
 * Return: the index of the value(success) or -1(failure)
*/
int linear_search(int *array, size_t size, int value) 
{
    int low  = 0;
    int high = size - 1;
    int mid =  low + (high - low) / 2;

    if (array == NULL) {
        return (-1);
    }
    while (low <= high) {
        if (array[mid] == value) {
            return (mid);
        }

        else if (array[mid] > value)
        {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
        
    }
    return (-1);
}