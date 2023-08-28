#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - function that calculate sum of the list
 * @head: first node of the list
 * Return: sum of the list
*/

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *ptr;

	ptr = head;

	while (head == NULL)
		return (0);

	sum = 0;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
