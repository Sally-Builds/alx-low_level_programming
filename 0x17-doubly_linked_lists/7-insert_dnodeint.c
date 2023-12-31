#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at index
 * @h: head of list
 * @idx: index
 * @n: number
 *
 * Return: NULL or pointer to newly inserted node
 */
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

	if (idx == 0)
	{
		ptr = add_dnodeint(h, n);
		return (ptr);
	}

	tmp = *h;

	while (tmp != NULL)
	{
		if (count == idx)
		{
			ptr->n = n;
			ptr->next = tmp;
			ptr->prev = tmp->prev;
			if (tmp->prev != NULL)
				tmp->prev->next = ptr;
			tmp->prev = ptr;
			return (ptr);
		}
		tmp = tmp->next;
		count++;
	}

	if (idx == count)
	{
	 	ptr = add_dnodeint_end(h, n);
		return (ptr);
	}
	free(ptr);
	return (NULL);
}
