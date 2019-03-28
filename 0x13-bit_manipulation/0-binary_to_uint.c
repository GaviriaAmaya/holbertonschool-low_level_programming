#include "holberton.h"
/**
 *binary_to_uint - Converts binary to unsigned int
 *@b: String with the binary number
 *
 *Return: Converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, number = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		number = number << 1;
		number |= b[i] - '0';
		i++;
	}
	return (number);
}
