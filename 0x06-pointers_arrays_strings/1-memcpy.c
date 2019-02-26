#include "holberton.h"
/**
 * _memcpy - Copies the content of a string to another
 *@src: Source string
 *@dest: Destination string
 *@n: Times that repeats
 *Return: Determined by dest variable
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int aux;

	for (aux = 0; aux < n; aux++)
	{
		src[aux] = dest[aux];
	}
	return (dest);
}
