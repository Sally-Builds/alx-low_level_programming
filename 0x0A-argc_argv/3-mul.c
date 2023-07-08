#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * main  - main function
 * @argc: number of command line arguments
 * @argv: command line argument
 *
 * Return: Always 1 or 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
