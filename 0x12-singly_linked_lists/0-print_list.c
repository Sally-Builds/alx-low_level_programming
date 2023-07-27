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
	int i = 1;

	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);


	if (h->next == NULL)
	{
		return (1);
	}

	return (i + print_list(h->next));
}
