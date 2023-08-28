#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees all allocated memory space
 * @head: first node of the list
 * Return: void
*/

void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}

