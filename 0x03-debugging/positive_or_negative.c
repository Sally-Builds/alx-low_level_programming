#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints the random is {postive, negative, zero}
 * Return: 0
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
}
