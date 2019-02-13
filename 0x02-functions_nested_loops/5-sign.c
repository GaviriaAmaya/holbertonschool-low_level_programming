#include "holberton.h"
/**
 *print_sign - Detects and prints the sign of n
 *@n: Number
 *
 *Return: Always success
 */

int print_sign(int n)

{
if (n > 48)
{
_putchar('+');
return (1);
}
else
{
if (n == 48)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
_putchar('\n');
}
