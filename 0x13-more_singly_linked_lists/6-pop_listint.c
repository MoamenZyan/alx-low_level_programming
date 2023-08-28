#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that pop the first node
 * @head: first node
 * Return: the value
*/

int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	value = (*head)->n;

	temp = (*head)->next;

	free(*head);

	*head = temp;

	return (value);
}
