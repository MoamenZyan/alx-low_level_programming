#include <stdio.h>
/**
* main - this is the main function
* Return: is always 0
*/
int main(void)
{

int i, save;
	for (i = 0; i <= 16; i++)
	{
		if (i > 9)
		{
			save = i;
			switch (i)
			{
			case 10:
				i = 97;
				break;
			case 11:
				i = 98;
				break;
			case 12:
				i = 99;
				break;
			case 13:
				i = 100;
				break;
			case 14:
				i = 101;
				break;
			case 15:
				i = 102;
				break;
			case 16:
				i = 10;
			}
		putchar((char)i);
		i = save;
		continue;
		}
	putchar(i + '0');
	}
return (0);
}
