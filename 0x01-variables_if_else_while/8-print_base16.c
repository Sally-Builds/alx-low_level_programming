#include <stdio.h>
/*
 *
 * main -  working hex
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int val = 0;
	int alpha = 'a';

	do {
		putchar(val + '0');
		val++;
	} while (val < 10);

	do {
		putchar(alpha);
		alpha++;
	} while (alpha <= 'f');

	putchar('\n');

	return (0);
}
