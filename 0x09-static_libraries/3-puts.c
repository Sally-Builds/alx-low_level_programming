#include <stdio.h>
#include <string.h>
/**
 * _puts - print string
 * @str: string to print
 */
void _puts(char *str)
{
	unsigned int i;

	for (i = 0; i < strlen(str); i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
