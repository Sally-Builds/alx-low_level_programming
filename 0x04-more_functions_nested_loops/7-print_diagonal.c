#include "main.h"

void print_diagonal(int n)
{
	int i = 1;

	while (i <= n)
	{
		int j = 1;
		
		while (j <= i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n <= 0)
		_putchar('\n');
}
