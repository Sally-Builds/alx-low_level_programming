#include <stdio.h>
/**
 * main - combinations
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int first = 0;

	while (first <= 7)
	{
		int second = first + 1;

		while (second <= 8)
		{
			int third = second + 1;

			while (third <= 9)
			{
				putchar(first + '0');
				putchar(second + '0');
				putchar(third + '0');
				if (first != 7)
				{
					putchar(',');
					putchar(' ');
				}
				third++;
			}
			second++;
		}
		first++;
	}

	putchar('\n');
	return (0);
}
