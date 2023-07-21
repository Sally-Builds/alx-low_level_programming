#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - sum the var args
 * @n: number of var args
 *
 * Return: sum of numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		sum += x;
	}
	return (sum);
}
