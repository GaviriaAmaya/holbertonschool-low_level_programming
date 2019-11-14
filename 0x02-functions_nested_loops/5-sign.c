#include "holberton.h"
/**
 * print_sign - Prints the sign of a number
 * @n: Number to be checked
 * Return: 1 if is positive, 0 if zero or -1 if is negative
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
