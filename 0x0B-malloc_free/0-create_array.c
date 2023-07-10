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
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = (char *) malloc(size);
	if (s == NULL)
		return (0);


	while (i < size)
	{
		if (i == 0)
			s[0] = c;
		else
			s[i] = '\0';
		++i;
	}

	return (s);
}
