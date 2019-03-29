#include "holberton.h"
/**
 *get_bit - Get's the binary value of an specific index
 *@index: How much positions the binary value have to "iterate"
 *@n: Integer number. The computer understands as binary
 *Return: Bit saved
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return(-1);

	return (n >> index & 1);
}
