#include "holberton.h"
/**
 *print_last_digit - Prints last digit of a n
 *@n: number
 *
 *Return: Always success
 *
 */
int print_last_digit(int n)
{
int l;

if (n < 0)
{
n = n * -1;
}
l = n % 10;
_putchar(l + '0');
return (l);
_putchar ('\n');
}
