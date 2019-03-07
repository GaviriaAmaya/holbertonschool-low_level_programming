#include "holberton.h"
#include <stdlib.h>
/**
 *_strdup - Duplicates an string
 *@str: Source string
 *Return: NULL if fails, Dest if success
 */
char *_strdup(char *str)
{
	int i, i2;
	char *p;

	if (!str)
	{
		return (NULL);
	}

		for (i = 0; str[i] != '\0'; i++)
		{
		}

	p = malloc(i * sizeof(char) + 1);

	if (p == NULL)
	{
		return (NULL);
	}

		for (i2 = 0; i2 < i; i2++)
		{
		p[i2] = str[i];
		p[i2] = '\0';
		}
	return (p);
}
