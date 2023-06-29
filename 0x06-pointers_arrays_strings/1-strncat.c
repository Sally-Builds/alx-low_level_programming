#include <string.h>
/**
 * _strncat - string concatenation n bytes
 * @dest: destination string
 * @src: source string
 * @n: n bytes
 *
 * Return: cocatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
