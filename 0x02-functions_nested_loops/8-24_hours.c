#include "main.h"

/**
* jack_bauer - this is function that show the time
* Return: it returns nothing
*/
void jack_bauer(void)
{
	int f, s;
		for (f = 0; f <= 23; f++)
		{
			for (s = 0; s <= 59; s++)
			{
				_putchar((f / 10) + 48);
				_putchar((f % 10) + 48);
				_putchar(':');
				_putchar((s / 10) + 48);
				_putchar((s % 10) + 48);
				_putchar('\n');
			}
		}
}


