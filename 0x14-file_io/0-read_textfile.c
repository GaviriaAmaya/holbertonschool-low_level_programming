#include "holberton.h"
/**
 *read_textfile - Reads a file
 *@filename: Points to the file that wants to read
 *@letters: Amount of chars: Buffer size
 *Return: Amount of characters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, size;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc((sizeof(char) * letters));

	size = read(fd, buffer, letters);

	if (size == -1)
	{
		close (size);
		return (0);
	}

	write (1, buffer, letters);
		close(fd);
		return (size);
}
