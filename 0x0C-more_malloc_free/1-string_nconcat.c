#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - a program that concatenates two strings
 *@s1: the first character
 *@s2: the second character
 *@n: the integer that has been unsigned
 *Return: the pointer to resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, j = 0, str1 = 0, str2 = 0;

	while (s1 && s1[str1])
		str1++;
	while (s2 && s2[str2])
		str2++;
	if (n < str2)
		ptr = malloc(sizeof(char) * (str1 + n + 1));
	else
		ptr = malloc(sizeof(char) * (str1 + str2 + 1));
	if (!ptr)
		return (NULL);
	while (i < str1)
	{
		ptr[i] = s1[ptr];
		i++;
	}
	while (n < str2 && i < (str1 + n))
		ptr[i++] = s2[j++];
	while (n >= str2 && i < (str1 + str2))
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	return (ptr);
}
