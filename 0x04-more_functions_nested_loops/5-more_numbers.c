#include "main.h"
/**
 * more_numbers - print numbers 14 times
 * Return: void
 */
void more_numbers(void)
{
	int a = 0;

	while (a <= 14)
	{
		int i = 0;

		while (i <= 14)
		{
			if (i < 10)
				_putchar(i + '0');
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			i++;
		}
		a++;
		_putchar('\n');
	}
}
