#include "lists.h"

/**
 * add_dnodeint_end - add node to end of list
 * @head: head of the list
 * @n: integer number
 *
 * Return:  pointer to newly created node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr;
	dlistint_t *tmp;

	ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;
	ptr->prev = NULL;


	if (*head != NULL)
	{
		tmp = (*head);

		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}

		ptr->prev = tmp;
		tmp->next = ptr;

	} else
	{
		*head = ptr;
	}

	return (ptr);
}
