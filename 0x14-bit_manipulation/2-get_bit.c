#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_binary - print binary equivalent of decimal number
 * @n: number to convert
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	n >>= index;
	return (n & 1);
}
