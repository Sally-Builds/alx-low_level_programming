#include <stdlib.h>
#include "main.h"

/**
 *array_range - creates an array of integers.
 *@min: minimum value.
 *@max: maximum value.
 *
 *Return: pointer to newly created array.
 *NULL if malloc fails &&  if min > max.
 */

int *array_range(int min, int max)
{
	int random;
	int i;
	int *ptr;

	random = 0;

	if (min > max)
		return (NULL);

	random = ((max + 1) - min);

	ptr = malloc(random * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < random; i++)
	{
		*(ptr + i) = min + i;
	}

	return (ptr);
}
