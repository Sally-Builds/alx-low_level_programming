#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - reads and prints from a file
 * @filename: path to file
 * @letters: chars to read
 * Return: chars read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	char *buffer;
	ssize_t bytes, writeVal;

	if (!filename)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		close(f);
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(f);
		return (0);
	}

	bytes = read(f, buffer, letters);

	if (bytes == -1)
	{
		close(f);
		free(buffer);
		return (0);
	}

	writeVal = write(STDOUT_FILENO, buffer, bytes);

	if (writeVal == -1)
	{
		close(f);
		free(buffer);
		return (0);
	}
	close(f);
	return (bytes);
}
