#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get the the chosen node
 * @head: first node in the list
 * @index: index to choose the node
 * Return: the chosen node
*/


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
