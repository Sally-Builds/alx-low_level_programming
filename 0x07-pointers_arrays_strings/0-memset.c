/**
 * _memset - fills block of memory with a particular value
 * @dest: memory location to fill
 * @b: value to fill in the memroy location
 * @n: number of bytes to be filled starting
 *
 * Return:  pointer to the memory location
 */
char *_memset(char *dest, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = b;
		i++;
	}
	return (dest);
}
