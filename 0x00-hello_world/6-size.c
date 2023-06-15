#include <stdio.h>
/**
 * main
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %lu bytes(s)\nSize of an int: %lu bytes(s)\nSize of a long int: %lu bytes(s)\nSize of a long long int: %lu bytes(s)\nSize of a float: %lu bytes(s)\n", sizeof(char), sizeof(int), sizeof(long), sizeof(long long), sizeof(float));
	return (0);
}
