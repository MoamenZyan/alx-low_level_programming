#include "lists.h"


/**
 * sum_dlistint - function that gets sum of elements in the list
 * @head: head of the node
 * Return: sum of elements
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
