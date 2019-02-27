#include "holberton.h"
/**
 *_print_rev_recursion - Prints reverse strings
 *@s: String to print
 *Return: String
 */
void _print_rev_recursion(char *s)
{
	if (*(s) != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
