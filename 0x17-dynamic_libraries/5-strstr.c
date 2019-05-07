#include "holberton.h"
#include <stdio.h>
/**
 *_strstr - Locates a substring in a string
 *@haystack: Pointer to the string
 *@needle: String to locate
 *Return: depends on the function args
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;
int size = 0;

	while (needle[size] != '\0')
	{
	size++;
	}

	for (i = 0; haystack[i] != '\0'; i++)
		{
		if (haystack[i] == needle[0])
			{
			for (j = 0; haystack[i + j] == needle[j]; j++)
				{
				if (j == size)
				{
				return (haystack + i);
				}
			}
		}
	}
	return (NULL);
}
