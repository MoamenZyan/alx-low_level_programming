#include "main.h"

/**
* *_strcpy - this is the main function
* Return: is always 0
* @dest: input1
* @src: input2
*/


char *_strcpy(char *dest, char *src)
{

int i = -1;

do {
	i++;
	dest[i] = src[i];
} while (src[i] != '\0');

return (dest);

}
