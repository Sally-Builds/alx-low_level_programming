#include <string.h>
/**
 * strncpp=y - copy string
 * @dest: destination
 * @src: source
 * @n: size
 *
 * Return: copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
