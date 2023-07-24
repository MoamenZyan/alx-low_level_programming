#include "main.h"
#include <string.h>

/**
* _puts - this is the main function
* Return: nothing
* @str: input
*/
void _puts(char *str)
{
int i;

	for (i = 0; i <= (int)strlen(str) + 1; i++)
	{

		if (i == (int)strlen(str) + 1)
		{
			_putchar('\n');
			break;
		}
		_putchar(str[i]);

	}


}
