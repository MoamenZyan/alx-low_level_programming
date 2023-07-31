#include "main.h"
/**
* _memcpy - this is the main function
* Return: char dest
* @dest: input1
* @src: input2
* @n: input3
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}

return (dest);
}

