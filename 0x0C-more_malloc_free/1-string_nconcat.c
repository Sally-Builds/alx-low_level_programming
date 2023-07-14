#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings together based on the size
 * @n: size
 * @s1: first string
 * @s2: second string
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	ptr = malloc(sizeof(char) * (len1 + n + 1)
			;
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++)
		ptr[i++] = s2[j];

	ptr[i] = '\0';

	return (ptr);
}
