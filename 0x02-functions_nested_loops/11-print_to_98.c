#include "main.h"
#include <stdio.h>
/**
* print_to_98 - Prints all natural numbers to 98
* @n: this is the input
* Return: nothing
*/
void print_to_98(int n)
{
int i;
	if (n > 98)
	{

		for (i = n; n >= 98; i--)
		{
			if (n == 98)
			{
				printf("%d", i);
				continue;
			}
			printf("%d, ", i);
		}
	}
	else if (n < 98)
	{
		for (i = n; n <= 98; i++)
		{
			if (n == 98)
			{
				printf("%d", i);
				continue;
			}
			printf("%d, ", i);
		}
	}
	else
	{
		printf("%d", n);
	}

printf("\n");
}

