#include "search_algos.h"
#include <math.h>

int print_array(int *array, size_t index, size_t size);

/**
 * binary_search - searches for a value using the binary algorithm
 * @array: array to perform the search
 * @size: size of the array
 * @value: value to search for in the array
 *
 * Return: returns an interger
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l;
	size_t r;

	if (array == NULL)
		return (-1);

	l = 0;
	r = size - 1;


	while (l <= r)
	{
		int m = floor((l + r) / 2);

		print_array(array, l, r);

		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}

	return (-1);
}

/**
 * print_array - prints given array from a particular index
 * @array: array to print
 * @index: index to start from
 * @size:  last index to print
 *
 * Return: 0 or 1
 */
int print_array(int *array, size_t index, size_t size)
{
	if (array == NULL)
		return (0);

	printf("Searching in array: ");
	while (index <= size)
	{
		printf("%i", array[index]);

		if (index < size)
			printf(", ");
		index++;
	}

	printf("\n");

	return (1);
}
