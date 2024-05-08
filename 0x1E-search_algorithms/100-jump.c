#include "search_algos.h"
int min(int a, int b);
/**
 * jump_search - function that searches for a value 
 * in a sorted array of integers using the Jump search algorithm
 * @array:  is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value:  is the value to search for
 * Return:  first index where value is located (success) or -1 (failure)
*/
int min(int a, int b) {
    if (b > a)
       return (a);
    else 
        return (b);
}

int jump_search(int *array, size_t size, int value) {
    int step = sqrt(size);
    int prev  = 0;

    while (array[min(step, size)-1] < value)
    {
        prev =  step;
        step += sqrt(size);
        if (prev >= size)
            return (-1);
    }

    while (array[prev] < value)
    {
        prev++;
        if (prev == min(step, size))
        {
            return (-1);
        }
    }

    if (array[prev] == value)
    {
        return (prev);
    }
    return (-1);
    
}
