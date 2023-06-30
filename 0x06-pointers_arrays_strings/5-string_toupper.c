#include <string.h>
#include <ctype.h>
/**
 * string_toupper - converts lower to uppercase
 * @str: string to convert
 *
 * Return: converted string
 */
char *string_toupper(char *str)
{
	unsigned int i = 0;

	while (i < strlen(str))
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}
