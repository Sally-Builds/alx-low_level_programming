#include "main.h"

/**
 * jack_bauer - Jack Bauer the game
 *
 *
 */
void jack_bauer(void)
{
	int num1;

	for (num1 = 0; num1 <= 2; num1++)
	{
		int num2;
		int highest = 9;

		if (num1 == 2)
			highest = 3;
		for (num2 = 0; num2 <= highest; num2++)
		{
			int num3;

			for (num3 = 0; num3 <= 5; num3++)
			{
				int num4;

				for (num4 = 0; num4 <= 9; num4++)
				{
					_putchar(num1 + '0');
					_putchar(num2 + '0');
					_putchar(':');
					_putchar(num3 + '0');
					_putchar(num4 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
