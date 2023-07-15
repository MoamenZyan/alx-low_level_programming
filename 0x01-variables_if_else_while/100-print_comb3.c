#include <stdio.h>

/**
* main - this is the main function
* Return: is always 0
*/

int main(void)
{
int i, j;
	for (i = 0; i <= 8; i++)
	{
		j = i + 1;
		for (; j <= 9; j++)
		{
			if (i == j)
				continue;
			putchar(i + '0');
			putchar(j + '0');
			if (i == 8 && j == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

putchar('\n');
return (0);
}
