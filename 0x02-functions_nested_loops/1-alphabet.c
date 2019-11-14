#include "holberton.h"
/**
 * print_alphabet - Prints the alphabet lowercase
 * Return: None (Void)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar('\n');
}
