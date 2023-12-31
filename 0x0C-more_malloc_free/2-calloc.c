#include <stdlib.h>
#include "main.h"
/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	unsigned int i;

	if (nmemb == 0 || size == 0)
		return ((void *)NULL);

	p = malloc(size * nmemb);
	if (p == NULL)
		return ((void *)NULL);

	for (i = 0; i < size * nmemb; i++)
	{
		p[i] = 0;
	}
	return (p);
}
