#include "main.h"
#include <stdio.h>
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */


char *_strstr(char *haystack, char *needle)
{
char *i, *p;

	for (; *haystack != '\0'; haystack++)
	{
		i = haystack;
		p = needle;
		while (*i == *p && *p != '\0')
		{
			i++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}

return (NULL);
}

