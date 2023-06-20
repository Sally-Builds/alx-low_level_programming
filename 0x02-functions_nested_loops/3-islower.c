#include "main.h"
#include <ctype.h>

/**
 * _islower - check if char is a lowercase
 * @c: character value
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (islower(c) == 0)
		return (0);
	else
		return (1);
}
