#include "holberton.h"
/**
 * _memset - Change values n times on a string
 *@s: String of characters
 *@b: String changer
 *@n: Number of repetitions of the memset
 *
 *Return: Determined by main.c
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int var;

	for (var = 0; var < n; var++)
	{
		/** *(s + var) */
		s[var] = b;
	}
	return (s);
}
