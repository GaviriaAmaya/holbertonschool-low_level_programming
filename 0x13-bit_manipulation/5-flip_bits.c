#include "holberton.h"
/**
 *flip_bits - Counts the differences between two binaries
 *@m: A number to compare
 *@n: Other number to compare
 *Return: Addition of the coincidences
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int plus = 0;
	unsigned int operator;

	operator = n ^ m;

	while (operator != 0)
        {
	plus = plus (operator & 1);
	operator = operator >> 1;
	}
	return (plus);
}
