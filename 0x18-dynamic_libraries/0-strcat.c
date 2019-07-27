#include "holberton.h"
/**
 * _strcat - Concatenates strings
 *@dest: Pointer to destination array
 *@src: Pointer to origin array
 *Return: Destination string
 */

char *_strcat(char *dest, char *src)
{
	int conts = 0;
	int contd = 0;

	while (dest[conts])
	{
		conts++;
	}
	while (src[contd])
	{
		dest[conts + contd] = src[contd];
		contd++;
	}
	dest[conts + contd] = '\0';
	return (dest);
}
