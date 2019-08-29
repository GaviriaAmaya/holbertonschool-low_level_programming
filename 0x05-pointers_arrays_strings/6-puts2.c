#include "holberton.h"
/**
 * puts2 - Prints skipping characters starting from 0
 * @str: String to print
 * Return: None
 */
void puts2(char *str)
{
	int i;

        for (i = 0; str[i] != '\0'; i+=2)
		_putchar(str[i]);

	_putchar('\n');
}
