#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;
	listint_t *current;

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	i = 0;
	while (i != index - 1)
	{
		if (temp == NULL)
		{
			return (-1);
		}
		i++;
		temp = temp->next;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}
