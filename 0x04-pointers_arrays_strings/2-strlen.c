#include "holberton.h"
/**
 *_strlen - Command that returns the length of a string
 *@s: String used
 *
 */
/*int _strlen(char *s)
{
	int n;
	n = 0;
	while (s == 0)
	{
		_putchar(n);
	} */
int _strlen(char *s)
{
	int n = 0;

	while (*(n + s) != 0)

	{
		n++;
	}
	return (n);
}
