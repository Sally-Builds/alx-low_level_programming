#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function
 * @argc: number of cmd args
 * @argv: cmd line args
 *
 * Return: always 0 or 1
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) <= 0)
		{
			printf("Error\n");
			return (1);
		}
		if (atoi(argv[i]) > 0)
			result = result + atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
