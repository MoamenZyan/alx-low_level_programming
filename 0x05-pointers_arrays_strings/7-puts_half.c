#include "main.h"
#include <string.h>

/**
* puts_half - this is the main function
* Return: nothing
* @str: input
*/

void puts_half(char *str)
{

int i, len;

if ((strlen(str) % 2) == 0)
	len = (int)strlen(str);
else
	len = (int)strlen(str) - 1;


	for (i = 0; i < len / 2; i++)
	{
		_putchar(str[i]);
	}

_putchar('\n');
}
