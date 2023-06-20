#include <ctype.h>
#include "main.h"
/**
 * _isalpha - checks if char is an alphabet
 * @c: char parameter
 *
 * Return: always 0 or 1
 */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
		return (1);
	else
		return (0);
}
