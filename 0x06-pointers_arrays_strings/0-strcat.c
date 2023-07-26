#include "main.h"
#include <string.h>
/**
* *_strcat - this is the main function
* Return: is always 0
* @dest: input1
* @src: input2
*/

char *_strcat(char *dest, char *src)
{

int i, dest_len;

dest_len = (int)strlen(dest);

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

return (dest);
}
