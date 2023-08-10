#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int i, *p, count;

	if (min > max)
		return (NULL);

	p = (int *)malloc(sizeof(int) * (max - min) + 1);

	if (p == NULL)
		return (NULL);

	count = 0;
	for (i = min; i <= max; i++)
	{
		p[count++] = i;
	}

	return (p);
}
