#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a list.
 *
 * @head: pointer to the first node of the list
 *
 * Return: the sum of all (n)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
