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
	return (memcpy(dest, src, n));
}
