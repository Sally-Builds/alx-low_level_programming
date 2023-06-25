#include <stdio.h>
#include "main.h"
/**
 * print_times_table - print n times table
 * @n: number of times to print table
 */
void print_times_table(int n)
{
	if (n > 0 && n < 15)
	{
		int i = 0;

		for (; i <= n; i++)
		{
			int j = 0;

			for (; j <= n; j++)
			{
				if (j > 0 && j <= n)
				{
					putchar(',');
					if (j * i < 10)
					{
						putchar(' ');
						putchar(' ');
						putchar(' ');
					}
					else if (j * i < 100 && j * i > 9)
					{
						putchar(' ');
						putchar(' ');
					}
					else
					{
						putchar(' ');
					}
				}
				printf("%d", i * j);
			}
			putchar('\n');
		}
	}
}
