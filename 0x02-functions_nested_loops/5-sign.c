#include "holberton.h"
/**
 *print_sign - Detects and prints the sign of n
 *@n: Number
 *
 *Return: Always success
 */

int print_sign(int n);

{
if (n < 48)
{
print_sign('-', n);
return (-1);
}
else if (n > 48)
{
print_sign('+', n);
return (1);
}
else
{
print_sign('0', n);
return (0);
}
_putchar('\n')
}
