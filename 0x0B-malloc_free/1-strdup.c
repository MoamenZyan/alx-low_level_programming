#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * *_strdup - creating array
* @str: input
 * Return: Nothing.
 */


char *_strdup(char *str)
{
char *dup;
int i;

dup = (char *)malloc(sizeof(str));

if (dup == NULL)
{
	return (NULL);
}

for (i = 0; i < (int)sizeof(str); i++)
{
	dup[i] = str[i];
}

return (dup);
}
