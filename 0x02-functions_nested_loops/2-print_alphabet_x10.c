#include "main.h"
/**
 * print_alphabet_x10 - print  alphabets in lowercase ten times
 */
void print_alphabet_x10(void)
{
	int i = 1;

	for (; i <= 10; i++)
	{
		char ch = 'a';

		for (; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
