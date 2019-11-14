#include "holberton.h"
/**
 * print_alphabet_x10 - Prints the alphabet lowercase
 * Return: None (Void)
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i <= 122; i++)
			_putchar(i);
		_putchar('\n');
	}
}
