#include "main.h"
/**
* print_alphabet - this is a function to print all alphabet
*/

void print_alphabet(void)
{
int i;
	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
/**
* main - this is the main function
* Return: is always 0
*/
int main(void)
{
print_alphabet();
return (0);
}
