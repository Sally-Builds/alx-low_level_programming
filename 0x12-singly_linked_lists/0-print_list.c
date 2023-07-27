#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - count nodes in a singly linked list
 * @h: node head
 * Return: length of singly linked list
 */
size_t print_list(const list_t *h)
{
	size_t i = 1;

	if (h == NULL)
		return (0);

	if (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		return (i + print_list(h));
	}

	printf("[%d] %s\n", h->len, h->str);
	return (i);
}
