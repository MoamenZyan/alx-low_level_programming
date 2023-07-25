#include "main.h"
#include <string.h>

/**
* print_rev - this is the main function
* Return: nothing
* @s: input
*/

void print_rev(char *s)
{

int i;

	for (i = (int)strlen(s) - 1; i >= -1; i--)
	{
		if (i == -1)
		{
			_putchar('\n');
			break;
		}
		_putchar(s[i]);
	}

}
