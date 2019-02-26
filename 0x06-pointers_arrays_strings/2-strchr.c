#include "holberton.h"
#include <stdio.h>
/**
 *_strchr - Locates a character in a string
 *@s: String
 *@c: Character to locate
 *Return: On success, 0. Else NULL
 */
char *_strchr(char *s, char c)
{
	int counter;


	for (counter = 0; s[counter] != '\0'; counter++)
	{
		if (s[counter] == c)
		{
		return (&s[counter]);
		}
	}
	if (s[counter] == c)
	{
	return (&s[counter]);
	}

return (NULL);
}
