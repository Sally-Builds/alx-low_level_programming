#include "main.h"
/**
 * print_line - prints the number of line n times
 * @n: number of times to print line
 * Return: void
 */
void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
