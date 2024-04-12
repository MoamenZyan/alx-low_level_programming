#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - function that searches for a value in an array
 * @array: is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value: is the value to search for
 * Return: return the first index where value is located
*/

int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	for (int i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (array[i]);
		}
	}
	return (-1);
}
