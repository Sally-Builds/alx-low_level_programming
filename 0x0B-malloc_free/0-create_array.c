#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - dynamically create an array of char and initialize with c
 * @size: size of the array
 * @c: char to initialize the array to
 *
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *s = malloc(size);

	if (size == 0)
		return (NULL);
	s[0] = c;

	return (s);
}
