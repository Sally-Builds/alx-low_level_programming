int prime(int n, int half, int i);
/**
 * is_prime_number - checks if a number is a prime number
 * @n: number to check
 *
 * Return: Always 0 or 1
 */
int is_prime_number(int n)
{
	int half = n / 2;

	return (prime(n, half, 2));
}

/**
 * prime - checks if a number is a prime number
 * @n: number to check
 * @half: half of the variable n
 * @i: incrementor variable
 *
 * Return: Always 0 or 1
 */
int prime(int n, int half, int i)
{
	if (n <= 1)
		return (0);
	if (i > half)
		return (1);

	if (n % i == 0)
		return (0);
	else
		return (prime(n, half, i + 1));
}
