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
	char *s_ptr = NULL;

	while (*s != '\0')
	{
		if (*s == c)
		{
			s_ptr = s;
			break;
		}
		++s;
	}
	return (s_ptr);
}
