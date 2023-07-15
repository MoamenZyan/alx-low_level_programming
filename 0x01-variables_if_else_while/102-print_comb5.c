#include <stdio.h>
/**
* main - this is the main function
* Return: is always 0
*/
int main(void)
{
int first, second;

for (first = 0; first <= 99; first++)
{
	for (second = first; second <= 99; second++)
	{
		if (first == second)
			continue;
		putchar((first / 10) + 48);
		putchar((first % 10) + 48);
		putchar(' ');
		putchar((second / 10) + 48);
		putchar((second % 10) + 48);
		if ((first == 98) && (second == 99))
			goto endloop;
		putchar(',');
		putchar(' ');
	}
}
endloop:
putchar('\n');
return (0);
}
