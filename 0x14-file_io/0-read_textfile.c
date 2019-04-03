#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 *read_textfile - Reads a file
 *@filename: Points to the file that wants to read
 *@letters: Save the amount of letters
 *Return: 
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	fd = open(filename, 
}
