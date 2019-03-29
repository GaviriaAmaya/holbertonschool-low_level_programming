#include "holberton.h"
/**
 *set_bit - Sets the value of a bit to 1
 *@n: Pointer to the number
 *@index: Indicates how much you move
 *Return: If success 1. If fails -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (*n < sizeof(unsigned long int) * 8)
	{
		mask = 1;
		mask = mask << index;
		*(n) = *(n) & mask;

		return (1);
	}
	else
	{
		return (-1);
	}
}
