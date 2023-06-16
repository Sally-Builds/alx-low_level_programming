#include <stdio.h>
/**
 * main - removes char e and char q
 *
 * Return: Always 0
 */
int main(void)
{
	char val = 'a';

	do {
		if (val == 'e')
		{
		}
		else if (val == 'q')
		{
		}
		else
		{
			putchar(val);
		}
		val++;
	} while (val <= 'z');
	putchar('\n');

	return (0);
}
