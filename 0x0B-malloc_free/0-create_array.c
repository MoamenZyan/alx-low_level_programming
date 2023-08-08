#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * *create_array - creating array
 * @size: size of the array
 * @c: the char
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
char *p;
int i;

p = (char *)malloc(size * (sizeof(char)));

if (p == NULL || size == 0)
{
	return (NULL);
}

for (i = 0; i < (int)size; i++)
{
	p[i] = c;
}

return (p);
}
