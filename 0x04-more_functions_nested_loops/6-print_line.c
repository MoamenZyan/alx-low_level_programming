#include "main.h"

/**
* print_line - printing lines
* Return: nothing
* @n: this is the input
*/

void print_line(int n)
{

int i;
	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
}
