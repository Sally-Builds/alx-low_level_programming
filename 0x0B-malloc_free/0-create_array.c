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
	char *s;
	unsigned int i = 0;;

	if (size == 0)
		return (NULL);

	s = (char *) malloc(size);
	if (s == NULL)
		return (0);


	while (i < size)
	{
		*(s + i) = c;
		++i;
	}
	*(s + i) = '\0';

	return (s);
}
