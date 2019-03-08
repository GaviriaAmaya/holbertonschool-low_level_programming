
#include "holberton.h"
#include <stdlib.h>
/**
 *malloc_checked - Verifies the success termination of malloc function
 *@b: Size of the memory allocation
 *
 *Return: Verifier.
 */
void *malloc_checked(unsigned int b)
{
	long *check;

	check = malloc(b);

	if (check == NULL)
	{
		exit(98);
	}
	return (check);
}
