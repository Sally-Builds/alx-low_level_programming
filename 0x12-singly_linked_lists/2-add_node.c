#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - add node at beginning of list
 * @head: head of list
 * @str: string of node
 *
 * Return: newly created node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_n;
	int strlen = 0;

	if (str == NULL)
		strlen = 0;
	while (str[strlen] != '\0')
	{
		strlen++;
	}


	new_n = malloc(sizeof(list_t));
	if (new_n == NULL)
		return (NULL);

	if (*head == NULL)
		new_n->next = NULL;
	else
		new_n->next = *head;
	new_n->str = strdup(str);
	new_n->len = strlen;
	*head = new_n;

	return (*head);
}
