#include "holberton.h"
/**
 *_strpbrk - Compares 2 strings and prints at the first coincidence
 *@s: String to compare
 *@accept: String compared
 *Return: Value of accept or 0 if no coincidence
 */
char *_strpbrk(char *s, char *accept)
{
	int conts;
	int conta;

	for (conts = 0; s[conts] != '\0'; conts++)
	{
		for (conta = 0; accept[conta] != '\0'; conta++)
		{
			if (s[conts] == accept[conta])
			{
				return (s + conts);
			}
		}
	}
	return (0);
}
