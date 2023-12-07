#include "lists.h"

/**
 * add_dnodeint - adds node to the head of the list
 * @head: head of the list
 * @n: value of the node
 * Return: address of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}

	new->next = *head;
	*head = new;
	(new->next)->prev = *head;
	return (new);
}
