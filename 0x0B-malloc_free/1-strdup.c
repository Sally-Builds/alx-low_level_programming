#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int len = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[len])
		++len;

	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
		return (NULL);

	while ((s[i] = str[i]) != '\0')
		i++;

	return (s);
}
