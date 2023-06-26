#include <string.h>
#include "main.h"
/**
 * print_rev - print string in reverse
 * @str: string to print
 */
void print_rev(char *str)
{
	int a;

	for (a = strlen(str) - 1; a >= 0; a--)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
