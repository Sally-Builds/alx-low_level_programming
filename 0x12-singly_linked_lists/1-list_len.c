#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - count nodes in a singly linked list
 * @h: node head
 * Return: length of singly linked list
 */
size_t list_len(const list_t *h)
{
	size_t i = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
