#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints given number to 98
 * @n: given number
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
			n--;
		}
	}
	else
	{
		printf("%d", n);
	}
	putchar('\n');
}
