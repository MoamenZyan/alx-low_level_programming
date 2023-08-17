#include <stdio.h>
#include <stdarg.h>
#include"variadic_functions.h"

/**
 * sum_them_all - variadic function calculating sum of it's argument
 * @n: number of argument
 * Return: total of sum
*/

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list args;

	va_start(args, n);

	int i, total;

	total = 0;

	for (i = 0; i < n; i++)
	{
		total += va_arg(args, int);
	}

	return (total);
}
