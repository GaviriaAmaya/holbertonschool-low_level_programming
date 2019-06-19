#include "holberton.h"
/**
 * times_table - Prints the table of 9 in 2 exes
 *@n, @m: multipliers
 *
 *Return: void
 */

void times_table(void)
{
int n, m, result;

for (n = 0; n < 10; n++)
{
for (m = 0; m < 10; m++)
{
if (m != 0)
{
_putchar(32);
}
result = n * m;
if (result / 10 != 0)
{
_putchar(result / 10 + 48);
}
else
{
if (m != 0)
{
_putchar(32);
}
}
_putchar(result % 10 + 48);
if (m != 9)
{
_putchar(44);
}
}
_putchar('\n');
}
}
