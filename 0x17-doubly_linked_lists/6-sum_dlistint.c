#include "lists.h"

/**
 * sum_dlistint - sum of list
 * @head: head of list
 *
 * Return: sum of list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr;

	if (head == NULL)
		return (sum);

	ptr = head;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
