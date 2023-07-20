#include "main.h"
/**
* _isupper - is a function that checks if the char is upper or lower case
* Return: 1 if upper 0 if lower
* @c: is the input
*/


int _isupper(int c)
{
if (c >= 65 && c <= 90)
	return (1);
else
	return (0);
}
