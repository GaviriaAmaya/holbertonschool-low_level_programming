#include "holberton.h"
/**
 *_puts - Prints a string on the stdi
 *
 *@str: String that containss the text
 */
void _puts(char *str)
{
	while (*str)
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
