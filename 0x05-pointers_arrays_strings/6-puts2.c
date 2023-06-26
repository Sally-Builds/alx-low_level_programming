#include "main.h"
#include <string.h>
/**
 * puts2 - print after twos
 * @s: string to print
 */
void puts2(char *s)
{
	unsigned int a;

	for (a = 0; a < strlen(s); a = a + 2)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
