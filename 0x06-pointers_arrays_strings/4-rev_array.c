/**
 * reverse_array - reverse array of numbers
 * @a: array
 * @n: number of array
 */
void reverse_array(int *a, int n)
{
	int i;
	int d;
	int temp;

	i = 0;
	d = n - 1;
	while (i < d)
	{
		temp = a[i];
		a[i] = a[d];
		a[d] = temp;
		i++;
		d--;
	}
}
