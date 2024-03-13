#include "search_algos.h"

/**
 * linear_search - performs a linear search on an array
 * @array: array to search
 * @size: size of the array
 * @value: value to search in array
 *
 * Return: returns index of the found value or -1 if value was not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
