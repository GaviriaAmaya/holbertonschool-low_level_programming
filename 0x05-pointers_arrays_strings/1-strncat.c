#include "holberton.h"
/**
 *_strncat - Concatenates two strings
 *@dest: 
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int conts;
	int contd;
	while (dest[contd])
	{
		contd++;
	}
	src[conts + contd] = dest[contd];
	while (src[conts])
	{
		src[conts + contd] = dest[contd];
		conts++;

		if (conts < n)
	{
		src[conts] + n;
	}
	}
	dest[conts + contd] = '\0';
	return (dest);
}
