#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserting a specific node at specific index
 * @head: first node of the list
 * @idx: targeted index
 * @n: value of the node
 * Return: address of the node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp;

	temp = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	i = 0;
	while (i != idx && temp != NULL)
	{
		i++;
		temp = temp->next;
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			break;
		}
	}

	return (new);
}
