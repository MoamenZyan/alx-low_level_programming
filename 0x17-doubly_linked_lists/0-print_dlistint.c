#include "lists.h"

/**
* print_dlistint - function to print all list element
* @h: head of the node
* Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}

return (i);
}
