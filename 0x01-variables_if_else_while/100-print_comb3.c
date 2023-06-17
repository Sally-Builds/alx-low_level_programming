#include <stdio.h>
/**
 * main - combinations
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int first;
	int second = 1;
	int temp = 1;

	for (first = 0; first < 9; first++)
	{
		for (; second < 10; )
		{
			if (first != second)
			{
				putchar(first + '0');
				putchar(second + '0');
				putchar(',');
				putchar(' ');
			}
			second++;
		}
		second = temp++;
	}
	putchar('\n');
	return (0);
}
