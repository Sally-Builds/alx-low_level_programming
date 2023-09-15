#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	dlistint_t *tmp;


	ptr = head;

	while (ptr != NULL)
	{
		tmp = ptr->next;
		free(ptr);
		ptr = tmp;
	}
}
