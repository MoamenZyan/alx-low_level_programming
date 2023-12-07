#include "lists.h"

/**
 * add_dnodeint_end - adds node to the end of the list
 * @head: head of the list
 * @n: value of the node
 * Return: address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (current->next != NULL)
		current = current->next;

	new->prev = current;
	current->next = new;

	return (new);
}
