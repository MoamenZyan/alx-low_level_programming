#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * *str_concat - creating array
 * @s1: input1
 * @s2: input2
 * Return: Nothing.
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, len1, len2, count, total_length;

	len1 = 0;
	len2 = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	total_length = len1 + len2 + 1;
	p = (char *)malloc(total_length);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}
	count = 0;
	for (i = len1; i < total_length; i++)
	{
		p[i] = s2[count];
		count++;
	}
	return (p);
}
