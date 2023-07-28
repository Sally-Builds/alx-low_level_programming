#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - free list
 * @head: head of list
 */
void free_list(list_t *head)
{
	list_t *curr;

	curr = head
	while (curr != NULL)
	{
		head = head->next;
		free(curr->str);
		free(curr);
		curr = head;
	}
}
