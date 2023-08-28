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

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
