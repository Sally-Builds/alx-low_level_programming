#include "main.h"
/**
 * print_square - print square
 * @size: number
 */
void print_square(int size)
{
	int i = 1;

	while (i <= size)
	{
		int j = 1;

		while (j <= size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (size <= 0)
		_putchar('\n');
}
