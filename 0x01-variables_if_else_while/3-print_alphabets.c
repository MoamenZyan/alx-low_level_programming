#include <stdio.h>
#include <ctype.h>
/**
* main - this is the main function
* Return: is always 0
*/

int main(void)
{

int i;

for (i = 97; i <= 122; i++)
{
	putchar((char)i);
}

for (i = 97; i <= 123; i++)
{
	if (i == 123)
	{
		i = 10;
		putchar(toupper((char)i));
		break;
	}
	putchar(toupper((char)i));
}

return (0);
}
