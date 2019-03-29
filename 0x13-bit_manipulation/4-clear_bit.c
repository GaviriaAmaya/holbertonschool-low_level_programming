#include "holberton.h"
#include <stdio.h>
/**
 *clear_bit - Sets the value of a bit to 1
 *@n: Pointer to the number
 *@index: Indicates how much you move
 *Return: If success 1. If fails -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = ~mask << index & *n;
	return (1);
}
