#include "main.h"
/**
 * print_triangle - print a triangle
 * @size: number
 */
void print_triangle(int size)
{
	int i = 1;

	while (i <= size)
	{
		int j = size;

		while (j >= 1)
		{
			if (j > i)
				_putchar(' ');
			else
				_putchar('#');
			j--;
		}
		_putchar('\n');
		i++;
	}
	if (size <= 0)
		_putchar('\n');
}
