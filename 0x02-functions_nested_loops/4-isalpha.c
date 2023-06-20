#include <ctype.h>
#include "main.h"
/**
 * _isalpha - checks if char is an alphabet
 * @c: char parameter
 *
 */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
		return (1);
	else
		return (0);
}
