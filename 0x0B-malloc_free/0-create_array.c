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
	unsigned int count = 0;
	char *s = malloc(size);

	if (size == 0)
		s = NULL;

	while (count < size)
	{
		if (count == 0)
			*(s + count) = c;
		else
			*(s + count) = '\0';
		++count;
	}

	return (s);
}
