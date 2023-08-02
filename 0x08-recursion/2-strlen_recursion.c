#include "main.h"

/**
* _strlen_recursion - the main function
* Return: void
* @s: input
*/

int _strlen_recursion(char *s)
{
	int total;

	total = 0;

	if (*s)
	{
		total++;
		total += _strlen_recursion(s + 1);
	}
return (total);
}

