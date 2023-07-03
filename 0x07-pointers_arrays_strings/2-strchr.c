#include <stddef.h>
/**
 * _strchr - finds the occurence of a character in string
 * @s: string to find occurence
 * @c: character to find
 *
 * Return: pointer to the first occurence of the character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	/**This is to return address of the null character if c is a null character */
	if (*s == c)
		return (s);
	return ('\0');
}
