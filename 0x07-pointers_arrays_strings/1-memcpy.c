#include <string.h>
/**
 * _memcpy - copy n bytes to location
 * @dest: destination
 * @src: source to copy from
 * @n: number of bytes to cpy
 *
 * Return: Returns address to memory location where bytes was copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
