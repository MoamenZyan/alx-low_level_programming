#include "main.h"
/**
* print_sign - this is function that checks the alphabet entered
* @n: if input is a later returns 1 else returns 0
* Return: 0 or 1 depending on the condition
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
