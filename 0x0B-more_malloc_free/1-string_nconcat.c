#include "holberton.h"
#include <stdlib.h>
/**
 *string_nconcat - Concatenate two strings 
 *
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, counter = 0;

	if (s1 == '\0')
	{
		s1 = "";
	}

	if (s2 == '\0')
	{
		s2 = "";
	}

	for (i = 0; s1[i]; i++)
	{
	}

	for (j = 0; s2[j]; j++)
	{
	}

	if (n >= j)
	{
		counter = i + j + 1;
	{

	else
	{
	counter = i + n + 1;
	}

	p = malloc(sizeof(char) * counter);

	if (p == '\0')
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		p[i] = s1[i];
	}

	if (n >= j)
        {
		for (j = 0; s2[j]; j++)
		{
		p[i + j] = s2[j]
		}
	}
	
	else
	{
		for (j = 0; s2[j]; j++)
		{
		p[i + j] = s2[j];
		}
	}
	p[i + j] = '\0';

	return (p);
}
