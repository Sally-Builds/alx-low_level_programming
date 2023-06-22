#include <ctype.h>
/**
 * _isupper - retuurns 0 or 1 depending on the case of the character
 * @c: integer
 *
 * Return: Always 0 or 1
 */
int _isupper(int c)
{
	if (isupper(c) > 0)
		return (1);
	else
		return (0);
}
