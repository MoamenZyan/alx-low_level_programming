#include "main.h"
#include <stdio.h>
/**
* *_strchr - this is the main function
* Return: char s
* @s: input1
* @c: input2
*/
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
if (c == '\0')
	return (s);
else
	return (NULL);
}

