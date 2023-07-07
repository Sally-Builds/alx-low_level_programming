int power_method(int num, int i);
/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: number to find the perfect square root
 *
 * Return: the perfect square root or -1
 */
int _sqrt_recursion(int n)
{
	return (power_method(n, 1));
}

/**
 * power_method - finds the natural square root of a number
 * @num: number to perfom its operation on
 * @i: incrementer variable
 *
 * Return: the perfect square root or -1
 */
int power_method(int num, int i)
{
	if (i * i == num)
	{
		return (i);
	}
	if (i * i > num)
	{
		return (-1);
	}
	return (power_method(num, i + 1));
}
