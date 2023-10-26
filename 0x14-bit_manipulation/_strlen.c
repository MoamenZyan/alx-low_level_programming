#include "main.h"

/**
 * _strlen - function calculate string length
 * @str: passed string
 * Return: length of the string
*/
int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;

	return (i);
}
