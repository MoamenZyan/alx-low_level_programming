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
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}

	return (i);
}
