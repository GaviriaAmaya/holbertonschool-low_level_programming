#include "holberton.h"
/**
 * print_numbers - Print from 0 to 9
 *
 *
 *Return: Always success
 */
void print_numbers(void)
{
int a;
a = 48;
while (a >= 48 && a <= 57)
{
	_putchar (a);
	a++;
}
_putchar ('\n');
}
