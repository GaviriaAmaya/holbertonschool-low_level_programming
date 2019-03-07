#include "holberton.h"
#include <stdlib.h>
/**
 *create_array - Pointer to the first position of the array
 *@size: Represents the size of array
 *@c: Characters on the array
 *Return: NULL if fails, Array if success
 */
char *create_array(unsigned int size, char c)
{
	unsigned int count;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(size * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < size; count++)
	{
		p[count] = c;
	}

	return (p);

}
