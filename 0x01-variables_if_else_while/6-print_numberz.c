#include <stdio.h>
/**
 * main - print digits as char
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int val = 0;

	do {
		putchar(val + '0');
		val++;
	} while (val < 10);
	putchar('\n');

	return (0);
}
