#include <stdio.h>
/**
 * main - prints alphabets lowercase and uppercase
 *
 * Return: Always 0
 */
int main(void)
{
	char val_lower = 'a';
	char val_upper = 'A';

	do {
		putchar(val_lower);
		val_lower++;
	} while (val_lower <= 'z');

	do {
		putchar(val_upper);
		val_upper++;
	} while (val_upper <= 'Z');

	putchar('\n');
	return (0);
}
