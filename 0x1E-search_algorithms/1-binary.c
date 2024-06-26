#include "search_algos.h"
#include <stdio.h>

/**
  * binary_search - searches for a value in a sorted array
  * @array: is a pointer to the first element of the array to search in
  * @size:  is the number of elements in array
  * @value: is the value to search for
  * Return: return the index where value is located
  */

int binary_search(int *array, size_t size, int value)
{
	int i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		i = left;
		while (i < right)
		{
			printf("%d, ", array[i]);
			i++;
		}
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}
