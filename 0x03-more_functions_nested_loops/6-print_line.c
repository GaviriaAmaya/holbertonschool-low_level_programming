#include "holberton.h"
/**
 * print_line - Prints a _ each n times
 * @n: Determines How much _ prints
 *Return: Void
 */

void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
{
_putchar(95);
}
_putchar('\n');
}
