void print_chessboard(char (*a)[8])
{
	while (*a != '\0')
	{
		char *x = **&a;
		while (**a != '\0')
		{
			putchar(**a);

		}
	}
}
