#include "main.h"

/**
* times_table - prints out 9 table
* Return: nothing
*/

void times_table(void)
{
int i, j, sum;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			sum = i * j;
			_putchar(',');
			_putchar(' ');

			if (sum <= 9)
				_putchar(' ');
			else
				_putchar((sum / 10) + 48);
			_putchar((sum % 10) + 48);
		}
	_putchar('\n');
	}
}

