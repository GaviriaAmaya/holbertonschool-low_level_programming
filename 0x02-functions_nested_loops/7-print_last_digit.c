#include "holberton.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: Number to operate
 * Return: Always Success
 */
int print_last_digit(int n)
{
	int number = n % 10;

	number = (number < 0 ? -number : number);
	_putchar(number + 48);

	return (number);
}
