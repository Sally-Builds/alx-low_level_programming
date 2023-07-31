#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
/**
 * listint_len - returns the number of elements in a list.
 * @h: pointer to the first node
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->n != '\0')
			i++;

		h = h->next;
	}

	return (i);
}
