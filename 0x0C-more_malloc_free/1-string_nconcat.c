#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* *string_nconcat - nconcat function
* Return: pointer to memory block
* @s1: input 1
* @s2: input 2
* @n: input 3
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1, len2, i, count;
	char *p;

	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";


	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= (unsigned int)len2)
	{
		n = len2;
	}
	p = malloc(sizeof(*p) * (len1 + n + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	count = 0;
	for (i = len1; i < len1 + (int)n; i++)
	{
		if (i == (len1 + (int)n) - 1)
		{
			p[i] = '\0';
			break;
		}
		p[i] = s2[count];
		count++;
	}
	return (p);
}

