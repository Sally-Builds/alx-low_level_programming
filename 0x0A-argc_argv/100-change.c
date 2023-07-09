#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - main function
 * @argc: number of cmd args
 * @argv: cmd args
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int value;
	int result = 0;
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	 value = atoi(argv[1]);
	while (i < 5)
	{
		if (value >= coins[i])
		{
			result += value / coins[i];
			value = value % coins[i];
		}
		i++;
	}
	printf("%d\n", result);
	return (0);
}
