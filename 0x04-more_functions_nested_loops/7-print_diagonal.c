#include "main.h"
/**
 * print_diagonal - print diagonal line
 * @n: number of times
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 1;

	while (i <= n)
	{
		int j = 1;

		while (j <= i)
		{
			if (j == i)
				_putchar('\\');
			else
				_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (n <= 0)
		_putchar('\n');
}
