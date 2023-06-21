#include "main.h"

/**
 * times_table - print the times table from 0 through 9
 *
 *
 */
void times_table(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		int j;

		for (j = 0; j <= 9; j++)
		{
			int mult = j * i;

			if (mult >= 10)
			{
				int first = mult / 10;
				int second = mult % 10;

				_putchar(first + '0');
				_putchar(second + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			} else
			{
				if (j != 0)
					_putchar(' ');
				_putchar(mult + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
