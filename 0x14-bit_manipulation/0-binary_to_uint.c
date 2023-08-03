#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * _pow - return the power to a number
 * @num: number to get power
 * @p: power
 *
 * Return: power of a number
 */
int _pow(int num, int p)
{
	if (p == 0)
		return (1);
	return (num * _pow(num, p - 1));
}

/**
 * binary_to_uint - binary to decimal conversion
 * @b: pointer to character
 *
 * Return: the decimal equivalent of the given binary
 */
unsigned int binary_to_uint(const char *b)
{
	int str_len = 0;
	int i = 0;
	int sum = 0;
	int j;

	if (*b == '\0')
		return (0);

	while (b[str_len] != '\0')
		str_len++;

	j = str_len - 1;
	while (i < str_len)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			sum += _pow(2, j);
		}
		j--;
		i++;
	}
	return (sum);
}
