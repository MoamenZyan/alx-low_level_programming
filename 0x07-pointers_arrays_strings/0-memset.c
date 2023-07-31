#include "main.h"
#include <stdio.h>
/**
* _memset - this is the main function
* Return: char s
* @s: input1
* @b: input2
* @n: input3
*/

char *_memset(char *s, char b, unsigned int n)
{

unsigned int i;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

return (s);
}


