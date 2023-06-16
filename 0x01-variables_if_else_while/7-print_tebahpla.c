#include <stdio.h>
/**
 * main - alphabet backwards
 *
 * Return: Always 0
 */
int main(void)
{
	char val = 'z';

	do {
		putchar(val);
		val--;
	} while ('a' <= val);
	putchar('\n');

	return (0);
}
