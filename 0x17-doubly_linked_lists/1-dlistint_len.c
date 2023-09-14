#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - get the number of items in the list
 * @h: head of the list
 * Return: number of items in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t count = 0;

	if (h == NULL)
		return (0);

	ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL)
		exit(1);
	ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
