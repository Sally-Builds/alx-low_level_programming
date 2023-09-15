#include "lists.h"

/**
 * add_dnodeint - adds node to the beginning of list
 * @head: head of list
 * @n: number to enter in node
 *
 * Return: head of list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = malloc(sizeof(dlistint_t));

	if (tmp == NULL)
		return (NULL);

	tmp->prev = NULL;
	tmp->next = (*head);
	tmp->n = n;

	if (*head != NULL)
		(*head)->prev = tmp;

	(*head) = tmp;

	return (tmp);
}
