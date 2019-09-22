#include "holberton.h"
/**
 * more_numbers - Print numbers from 1 to 14
 *
 *
 *Return: Void
 */

void more_numbers(void)
{
int a;
int b;
int units;
int dec;

for (b = 0; b < 10; b++)
{
for (a = 0; a <= 14; a++)
{
dec = (a / 10);
units = (a % 10);
if (a >= 10)
{
_putchar (dec + 48);
}
if (a >= 0)
{
_putchar (units + 48);
}
}
_putchar ('\n');
}
}
