#include "holberton.h"
/**
 * print_triangle - Prints # character
 * @size: Variable that means the counter
 *
 * Return Success
 */

void print_triangle(int size)

{
int clm, rws;

if (size <= 0)
_putchar('\n');

for (rws = 0; rws < size; rws++)
{
for (clm = 1; clm <= size; clm++)
{

if (clm < size - rws)
{
_putchar(32);
}

else
{
_putchar(35);
}
}
_putchar('\n');
}
}
