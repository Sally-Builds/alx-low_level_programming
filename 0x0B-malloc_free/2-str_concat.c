#include <stdlib.h>
#include <stddef.h>
char *str_concat(char *s1, char *s2)
{
	unsigned int lenTotal, len1, len2, i, j;
	char *s;
	len1 = 0;
	len2 = 0;
	lenTotal = 0;
	i = 0;
	j = 0;

	if (s1 == NULL || s2 ==  NULL)
		return (NULL);

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	lenTotal = len1 + len2;
	s = malloc(sizeof(char) *  (lenTotal  + 1));

	if (s == NULL)
		return (NULL);

	while(i < len1)
	{
		s[i] = s1[i];
		i++;
	}
	

	while (i < lenTotal)
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	return (s);
}
