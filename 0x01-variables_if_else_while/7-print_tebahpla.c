#include <stdio.h>
/**
* main - this is the main function
* Return: is always 0
*/
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar((char)i);
	}

putchar('\n');
return (0);
}
