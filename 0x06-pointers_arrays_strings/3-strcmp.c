/**
 * _strcmp - string comparison
 * @s1: string one
 * @s2: string two
 *
 * Return: val
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int val;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			val = s1[i] - s2[i];
			break;
		}
		else
		{
			val = s1[i] - s2[i];
		}
		i++;
	}
	return (val);
}
