#include "main.h"
/**
 * print_alphabet - prints all alphabets in lowercase
 *
 */
void print_alphabet(void)
{
	char ch = 'a';

	for (; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
