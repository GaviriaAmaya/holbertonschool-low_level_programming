#include "holberton.h"
/**
 * rev_string - Function that reverses an string
 * @s: String to reverse
 * Return: Void
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char aux;

	while (s[len] != '\0')
		len++;

	len--;

	while (i <= ((i + len) / 2))
	{
		aux = s[i];
		s[i] = s[len];
		s[len] = aux;
		i++;
		len--;
	}
}
