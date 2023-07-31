#include "main.h"
#include <stdio.h>
/**
* _memset - this is the main function
* Return: char s
* @s: input1
* @b: input2
* @n: input3
*/

char *_memset(char *s, char b, unsigned int n)
{

unsigned int i;
	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}

return (s);
}

void simple_print_buffer(char *buffer, unsigned int size)
{
        unsigned int i;

        i = 0;
        while (i < size)
        {
                if (i % 10)
                {
                        printf(" ");
                }
                if (!(i % 10) && i)
                {
                        printf("\n");
                }
                printf("0x%02x", buffer[i]);
                i++;
        }
        printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[98] = {0x00};

    simple_print_buffer(buffer, 98);
    _memset(buffer, 0x01, 95);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);
    return (0);
}
