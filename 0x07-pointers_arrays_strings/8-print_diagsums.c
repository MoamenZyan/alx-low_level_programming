#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */


void print_diagsums(int *a, int size)
{
int total1, total2, i;


total1 = 0;

total2 = 0;

	for (i = 0; i < size; i++)
	{
		total1 += a[i * size + i];
		total2 += a[i * size + (size - i - 1)];
	}

printf("%d, %d\n", total1, total2);
}
