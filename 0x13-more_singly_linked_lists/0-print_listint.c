#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function print out elements and there count
 * @h: header of the list
 * Return: count of elements in the list
*/

size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
