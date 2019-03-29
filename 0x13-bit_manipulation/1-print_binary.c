#include "holberton.h"
/**
 *print_binary - Prints the convertion to a binary number
 *@n: Number received
 */
void print_binary(unsigned long int n)
{
	unsigned long int copy;

	for (copy = 128; copy > 0; copy >>= 1)
	{
		if (copy & n)
			_putchar(49);
		else
			_putchar(48);
	}
}
