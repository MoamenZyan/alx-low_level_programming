#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - main function
* Return: 0 if success 1 if failure
* @argc: arguments counter
* @argv: arguments vector
*/
int main(int argc, char *argv[])
{
int i;
int sum;
sum = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			sum *= atoi(argv[i]);
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
