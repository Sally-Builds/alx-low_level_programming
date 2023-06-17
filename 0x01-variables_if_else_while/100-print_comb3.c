#include <stdio.h>

int main(void)
{
	int first;

	for (first = 0; first < 9; first++)
	{
		int second;

		for (second = 1; second < 10; second++)
		{
			putchar(first + '0');
			putchar(second + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
