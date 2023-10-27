#include "main.h"

/**
 * get_endianness - prog checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned long int a;

	a = 1;
	return (*(char *)&a);
}
