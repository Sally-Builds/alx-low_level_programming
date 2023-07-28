#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * add_node_end - adds a node at the end of the linked list
 * @head: pointer to the first node of the list
 * @str: string to add
 * Return: NULL if it fails / starting addr of the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_n, *temp;
	size_t strlen = 0;

	if (str == NULL)
		strlen = 0;

	while (str[strlen] != '\0')
		strlen++;

	new_n = malloc(sizeof(list_t));
	if (new_n == NULL)
		return (NULL);

	new_n->str = strdup(str);
	new_n->len = strlen;
	new_n->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = new_n;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_n;
	}
	return (*head);
}
