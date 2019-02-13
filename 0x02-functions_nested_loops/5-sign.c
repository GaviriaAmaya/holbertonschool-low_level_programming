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
_putchar(43);
return (1);
}
else if (n == 48)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
_putchar('\n');
}
