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

	if (fd < 0)
	{
		close(fd);
		return (0);
	}

	buffer = malloc((sizeof(char) * letters));

	if (buffer == NULL)
		return (0);

	size = read(fd, buffer, letters);

	if (size < 0)
	{
		free(buffer);
		close(size);
		return (0);
	}

	if ((write(STDOUT_FILENO, buffer, size)) < 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (size);
}
