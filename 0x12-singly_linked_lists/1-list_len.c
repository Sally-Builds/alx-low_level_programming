#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - count nodes in a singly linked list
 * @h: node head
 * Return: length of singly linked list
 */
size_t list_len(const list_t *h)
{
	size_t i = 1;

	if (h == NULL)
		return (0);

	if (h->next == NULL)
	{
		return (1);
	}

	return (i + list_len(h->next));
}
