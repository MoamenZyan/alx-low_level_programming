#include "main.h"

/**
* _isalpha - this is function that checks the alphabet entered
* @c: if input is a later returns 1 else returns 0
* Return: 0 or 1 depending on the condition
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
