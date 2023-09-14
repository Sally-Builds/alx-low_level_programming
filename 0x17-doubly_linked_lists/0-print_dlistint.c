#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print all the numbers in the list
 * @h: head of the list
 * Return: number of items in the list
 */
size_t print_dlistint(const dlistint_t *h)
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
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}

	return (count);
}
