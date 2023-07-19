#include "main.h"
#include <stdio.h>
/**
* print_to_98 - Prints all natural numbers to 98
* @n: this is the input
* Return: nothing
*/
void print_to_98(int n)
{
	if (n > 98)
	{
		int i;

		for (i = n; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				continue;
			}
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		int i;

		for (i = n; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				continue;
			}
			printf("%d, ", n);
		}
	}
	else
	{
		printf("%d", n);
	}

printf("\n");
}

