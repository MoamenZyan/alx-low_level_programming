#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the indexed node
 * @head: head of the list
 * @index: index of the targeted node
 * Return: 1 on success -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = *head;

	if (index == 0 && current != NULL)
	{
		if (current->next == NULL)
		{
			*head = NULL;
			free(current);
			return (1);
		}
		(current->next)->prev = NULL;
		*head = current->next;
		free(current);
		return (1);
	}

	while (current != NULL && i != index)
	{
		i++;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	(current->prev)->next = current->next;
	(current->next)->prev = current->prev;

	return (1);
}
