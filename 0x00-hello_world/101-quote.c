#include <stdio.h>
#include <string.h>
/*
 * main - print to std err
 * Return: returns 0
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int count = 0;

	while (count < (int) strlen(str))
	{
		putchar(str[count]);
		count++;
	}
	putchar('\n');
return (1);
}
