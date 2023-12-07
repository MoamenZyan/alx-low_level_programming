#include "lists.h"


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i != index)
	{
		head = head->next;
		i++;
	}

	if (head == NULL)
		return (NULL);
	

	return (head);
}
