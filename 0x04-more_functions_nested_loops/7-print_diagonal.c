#include "main.h"
/**
* print_diagonal - printing
* Return: nothing
* @n: input
*/


void print_diagonal(int n)
{
int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				if (j == n - 1)
					break;
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}

}
