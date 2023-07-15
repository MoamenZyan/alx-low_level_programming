#include <stdio.h>
/**
* main - this is the main function
* Return: is always 0
*/
int main(void)
{
int i, j, k, tool;

for (i = 0; i <= 9; i++)
{
	for (j = i + 1; j <= 9; j++)
	{
		for (k = j + 1; k <= 9; k++)
		{
			if ((i == j) && (i == k) && (j == k))
				continue;
			else if ((i == j) || (i == k) || (k == j))
				continue;
			putchar(i + '0');
			putchar(j + '0');
			putchar(k + '0');
			if (i == 7 && j == 8 && k == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}
