#include "holberton.h"
/**
 *print_rev - Prints in reverse mode a string
 *@s: Pointer of the string
 *
 */

void print_rev(char *s)
{
	int t = 0;

	while (*(s + t))
	t++;
	while (t--)
	{
	_putchar (*(s + t));
	}
	_putchar ('\n');
}
