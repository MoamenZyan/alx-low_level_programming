#include "lists.h"

/**
 * dlistint_len - calculate the length of the node
 * @h: head of the node
 * Return: length of node.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
