#include <stdio.h>
/**
* main - this is the main function
* Return: is always 0
*/
int main(void)
{
int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48);
		if (i == 9)
			break;
		putchar(',');
		putchar(' ');
	}
putchar('\n');
return (0);
}

