#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * **alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: Nothing.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	p = malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0)
		return (NULL);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);

		if (p[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(p[i]);
			}
			free(p);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}

