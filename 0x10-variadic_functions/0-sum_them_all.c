#include"variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - variadic function calculating sum of it's argument
 * @n: number of argument
 * Return: total of arguments
*/

int sum_them_all(const unsigned int n, ...)
{
	int i, total;

	va_list args;

	va_start(args, n);
	if (n == 0)
		return (0);

	total = 0;

	for (i = 0; i < (int)n; i++)
	{
		total += va_arg(args, int);
	}
	return (total);
}
