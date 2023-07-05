#include "main.h"
/**
 * _puts_recursion - print string using recursion
 * @s: string pointer to print
 */
void _puts_recursion(char *s)
{
	char c = *s;

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(c);
	_puts_recursion(++s);
}
