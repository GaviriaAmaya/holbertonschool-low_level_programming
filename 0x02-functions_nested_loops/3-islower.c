#include "holberton.h"
/**
 * _islower - Checks is a char is lowercase or uppercase
 * @c: Integer that will be char on the printing
 * Return: 1 if is lower, 0 if its uppercase
 */
int _islower(int c)
{
	return (c > 96 && c < 123 ? 1 : 0);
}
