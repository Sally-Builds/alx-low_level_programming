#include <stdio.h>
/**
 * main - numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int val = 0;

	do {
		putchar(val + '0');
		if (val != 9)
		{
			putchar(',');
			putchar(' ');
		}
		val++;
	} while (val < 10);
	putchar('\n');

	return (0);
}
