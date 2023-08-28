#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function print out elements and there count
 * @h: header of the list
 * Return: count of elements in the list
*/

size_t listint_len(const listint_t *h)
{
	size_t i;

	if (h == NULL)
	{
		printf("Error\n");
		return (1);
	}
	const listint_t *ptr;

	ptr = h;

	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}

	return (i);
}
