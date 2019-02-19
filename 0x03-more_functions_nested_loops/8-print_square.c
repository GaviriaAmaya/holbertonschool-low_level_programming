#include "holberton.h"
/**
 * print_square - Prints an square of ASCII 35
 *@size: Char that receives the other variables
 *
 *Return Success
 */

void print_square(int size)
{
int rws, clm;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (rws = 0; rws < size; rws++)
{
for (clm = 0; clm < size; clm++)
{
_putchar(35);
}
_putchar('\n');
}
}
}

