#include "holberton.h"
/**
 *_strlen - Command that returns the length of a string
 *@s: String used
 *Return: Value of the counter n
 */
int _strlen(char *s)
{
	int n = 0;

	while (*(n + s) != 0)

	{
		n++;
	}
	return (n);
}
