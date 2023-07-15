#include <stdio.h>
/**
* main - this is the main function
* Return: is always 0
*/
int main(void)
{
int i, j, k, l, tool;

tool = 0;

for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 9; j++)
	{
		for (k = i; k <= 9; k++)
		{
			for (l = j + 1; l <= 9; l++)
			{
				if ((i == j) && (j == k) && (k == l))
					continue;
				putchar(i + '0');
				putchar(j + '0');
				putchar(' ');
				putchar(k + '0');
				if ((k == 1) && (l == 1) && tool == 0)
				{
					l = 0;
					tool = 1;
				}
				putchar(l + '0');
				if ((i == 9) && (j == 8) && (k == 9) && (l == 9))
					goto endloop;
				putchar(',');
				putchar(' ');
			}
		}

	}
}
endloop:
putchar('\n');
return (0);
}
