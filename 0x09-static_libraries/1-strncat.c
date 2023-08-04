#include "main.h"
#include <string.h>


/**
* *_strncat - this is the main function
* Return: is always 0
* @dest: input1
* @src: input2
* @n: input3
*/

char *_strncat(char *dest, char *src, int n)
{

int i, len_dest;

len_dest = (int)strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len_dest + i] = src[i];
	}

return (dest);

}
