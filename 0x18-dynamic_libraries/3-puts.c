#include "main.h"
#include <string.h>

/**
 * _puts - prints character.
 * @str: string.
 *
 */

void _puts(char *str)
{
	unsigned int a;

	for (a = 0; a < strlen(str); a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
