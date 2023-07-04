/**
 * _strpbrk - finds the first char in a string that matches the given string
 * @s: string to be scanned
 * @accept: string containing character to be matched
 *
 * Return: returns a pointer to the matched charactr or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *def_ptr = accept;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}
		s++;
		accept = def_ptr;
	}

	return ('\0');
}
