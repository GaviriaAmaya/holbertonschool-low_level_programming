#include "holberton.h"
/**
 * _strlen - Function that measures the lenght of a string
 * @s: String to meassure
 * Return: Void
 */
int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
		i++;

	return (i);
}
