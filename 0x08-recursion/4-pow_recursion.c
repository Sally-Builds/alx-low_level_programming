/**
 * _pow_recursion - return the power of x by y
 * @x: number to get power
 * @y: power of
 *
 * Return: power of a number x by y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
