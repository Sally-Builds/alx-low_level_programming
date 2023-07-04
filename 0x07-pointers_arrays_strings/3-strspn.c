/**
 * _strspn - returns the length of the initial substring
 * @s: string to be scanned
 * @accept: string containing the characters to be matched
 *
 * Return: - length
 */
unsigned int _strspn(char *s, char *accept)
{
	int len = 0;
	char *def_ptr = accept;
	int checker = 0;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				len++;
				checker = 1;
				break;
			}
				accept++;
				checker = 0;
		}
		if (checker == 0)
			break;
		s++;
		accept = def_ptr;
	}
	return (len);
}
