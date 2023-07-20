#include "main.h"
#include <stdio.h>

/**
* _isdigit - this is a function check if the input is digit or not
* Return: 1 if digit 0 if not
* @c: is the input
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
