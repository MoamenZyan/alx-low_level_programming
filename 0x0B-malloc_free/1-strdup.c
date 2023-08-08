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
int i, r;
r = 0;
while (str[r] != '\0')
	r++;


dup = (char *)malloc(r + 1);

if (str == NULL)
{
	return (NULL);
}

for (i = 0; i < r; i++)
{
	dup[i] = str[i];
}

if (dup == NULL)
{
	return (NULL);
}
return (dup);
}
