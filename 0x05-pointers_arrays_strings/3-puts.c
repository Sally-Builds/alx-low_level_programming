#include <string.h>
#include "main.h"
/**
 * _puts - print string
 * @str: string to print
 */
void _puts(char *str)
{
	unsigned int i;

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
