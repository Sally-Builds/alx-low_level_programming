#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - allocate grid
 * @width: array width
 * @height: array height
 *
 * Return: array of arrays
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int *b;
	int i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(int) * (height - 1));

	if (a == NULL)
		return (NULL);

	while (i < height)
	{
		int j = 0;

	b = malloc(sizeof(int) * (width - 1));
		while (j < width)
		{
			b[j] = 0;
			j++;
		}
		a[i] = b;
		i++;
	}

	return (a);
}
