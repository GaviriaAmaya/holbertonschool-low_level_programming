#include "holberton.h"
/**
 * print_line - Prints a _ each n times
 * @n: Determines How much _ prints
 *Return: Void
 */
void print_line(int n)

<<<<<<< HEAD
{
	while (n > 0)
	{
		_putchar(95);
	}
	n--;

	_putchar('\n');

=======
void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
{
_putchar(95);
}
_putchar('\n');
>>>>>>> a58c8594626d5952ab78e7991073c3b92dac3ed8
}
