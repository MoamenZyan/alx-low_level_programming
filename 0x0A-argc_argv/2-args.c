#include <stdio.h>
#include "main.h"

/**
* main - main function
* Return: 0
* @argc: arguments counter
* @argv: arguments array of array
*/

int main(__attribute__((unused))int argc, char **argv)
{
int i;

for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

return (0);
}
