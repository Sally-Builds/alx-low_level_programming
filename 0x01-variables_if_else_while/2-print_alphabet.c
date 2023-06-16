#include <stdio.h>
/**
 * main - prints all the alphabets
 *
 * Return: Always  0
 *
 */
int main(void)
{
	char val = 'a';

	do {
		putchar(val);
		val++;
	} while (val <= 'z');

	putchar('\n');
}

