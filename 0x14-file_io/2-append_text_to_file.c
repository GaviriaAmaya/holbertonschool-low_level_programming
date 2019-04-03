#include "holberton.h"
/**
 *append_text_to_file - Creates a file with a content of a string
 *@filename: Pointer to the Name of the file
 *@text_content: String with the content of the file
 *Return: 1 if success - -1 if error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_APPEND, 0600);

	if (fd < 0)
	{
		close(fd);
		return (-1);
	}

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[i] != '\0')
		i++;
	if ((write(fd, text_content, i) < 0))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
