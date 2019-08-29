#include "holberton.h"
/**
 * print_rev - Prints an string in reverse
 * @s: String to be printed
 * Return: Void
 */
void print_rev(char *s)
{
	int printer;

	printer = _strlen(s);

	for (; printer != 0; printer--)
		_putchar (s[printer]);

	_putchar(s[0]);
	_putchar('\n');
}
