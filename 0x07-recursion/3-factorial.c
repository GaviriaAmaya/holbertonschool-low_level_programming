#include "holberton.h"
/**
 *factorial - Prints the factorial op of a number
 *@n: The first number to operate
 *Return: -1 if error. Factorial if success
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
