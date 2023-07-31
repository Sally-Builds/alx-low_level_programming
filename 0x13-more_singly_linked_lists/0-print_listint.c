#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * print_listint - prints list and returns number of elements
 * @h: head of list
 *
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		count++;
	}

	printf("%d\n", h->n);

	return (count);
}
