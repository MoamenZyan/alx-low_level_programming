#include "lists.h"



dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (new == NULL)
		return NULL;

	new->n = n;

	while (current != NULL && i != idx)
	{
		i++;
		current = current->next;
	}

	if (current == NULL)
		return (NULL);


	(current->prev)->next = new;
	new->prev = current->prev;
	new->next = current;
	current->prev = new;

	return (new);
}
