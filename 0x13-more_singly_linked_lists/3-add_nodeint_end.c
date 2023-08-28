#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - append node to the end of the list
 * @head: head node of the list
 * @n: value of the node
 * Return: address of the new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *ptr;

	ptr = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	while (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = new;

	return (new);
}
