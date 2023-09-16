#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *ptr;
	dlistint_t *tmp;

	if (*h == NULL)
		return (NULL);

	ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL)
		return (NULL);

	tmp = *h;

	while (tmp != NULL)
	{
		if (count == idx)
		{
			ptr->n = n;
			ptr->next = tmp;
			ptr->prev = tmp->prev;
			tmp->prev = ptr;
			
			if (idx == 0)
				(*h) = ptr;
			return (ptr);
		}
		tmp = tmp->next;
		count++;
	}

	return (NULL);
}
