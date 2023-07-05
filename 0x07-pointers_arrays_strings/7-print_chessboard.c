#include <stdio.h>
#include <string.h>
#include <ctype.h>
void print_chessboard(char (*a)[8])
{
	while (*a != '\0')
	{
		char *a_ptr = a;
		while (**a_ptr != '\0')
		{
			_putchar(**a_ptr);
			a_ptr++;

		}
		a++;
	}
}
