#include <string.h>
/**
 * rev_string - reverse string
 * @s: string to reverrse
 */
void rev_string(char *s)
{
	int a, b;

	for (a = strlen(s) - 1, b = 0; a > b; b++, a--)
	{
		char temp = s[b];

		s[b] = s[a];
		s[a] = temp;
	}
}
