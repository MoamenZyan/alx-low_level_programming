#include "main.h"
#include <string.h>

/**
* puts2 - this is the main function
* Return: nothing
* @str: input
*/


void puts2(char *str)
{

int i, len;

len = (int)strlen(str);

	for (i = 0; i <= len - 1; i += 2)
	{
		_putchar(str[i]);
	}
_putchar('\n');

}
