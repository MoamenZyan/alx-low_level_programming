#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers separated by string
 * @separator: separate between numbers
 * @n: numbers of arguments
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		printf("%d", x);
		if (separator == NULL)
			continue;
		if (i == (n - 1))
			continue;
		printf("%s", separator);
	}
	printf("\n");
}
