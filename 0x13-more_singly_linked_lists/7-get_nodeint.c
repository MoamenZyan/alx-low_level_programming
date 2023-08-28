#include <stdlib.h>
#include <stdio.h>
#include "lists.h"



listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	i = 0;

	while (i != index && head != NULL)
	{
		i++;
		head = head->next;
	}
	if (i == index)
		return (head);
	else
		return (NULL);
}
