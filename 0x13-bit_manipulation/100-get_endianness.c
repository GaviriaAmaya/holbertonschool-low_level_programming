#include "holberton.h"
/**
 *get_endianness - Get the underlying architecture
 *Return: If Big Endian: 0 - If Little Endian 1
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *p = (char *) &num;

	return (*p);
}
