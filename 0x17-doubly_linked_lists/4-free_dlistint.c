#include "lists.h"

/**
 * free_dlistint - function to free nodes of the list
 * @head: head of the list
 * Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
