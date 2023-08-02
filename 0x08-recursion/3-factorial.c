#include "main.h"

/**
* factorial - the main function
* Return: n
* @n: input
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
