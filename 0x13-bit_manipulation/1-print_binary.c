#include "holberton.h"
/**
 *print_binary - Prints the convertion to a binary number
 *@n: Number received
 */
void print_binary(unsigned long int n)
{
	char number;

	for (number = 0; number > 0; number >> 1)
	{
		if (n & number)
			_putchar(49);
		else
			_putchar(48);
	}
}
