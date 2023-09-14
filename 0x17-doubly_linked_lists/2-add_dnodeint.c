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

	if (*head == NULL)
	{
		tmp->prev = NULL;
		tmp->next = NULL;
		tmp->n = n;

		*head = tmp;
		return (tmp);
	}

	tmp->prev = NULL;
	tmp->next = (*head);
	tmp->n = n;

	(*head) = tmp;

	return (tmp);
}
