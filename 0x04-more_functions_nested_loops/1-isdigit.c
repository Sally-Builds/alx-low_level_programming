#include <ctype.h>
/**
 * _isdigit - return a digit
 * @n: number
 *
 * Return: always 0 or 1
 */
int _isdigit(int n)
{
	if (isdigit(n) > 0)
		return (1);
	else
		return (0);
}
