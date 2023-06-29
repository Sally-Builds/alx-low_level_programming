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
	int i;

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
