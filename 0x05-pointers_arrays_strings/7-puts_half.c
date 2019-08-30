#include "holberton.h"
/**
 * puts_half - Prints the half of array
 * @str: String received
 * Return: None
 */
void puts_half(char *str)
{
	int lenght;

	for (lenght = 0; str[lenght] != '\0'; lenght++)
		;

	for (lenght = (lenght + 1) / 2; str[lenght] != '\0'; lenght++)
		_putchar(str[lenght]);

	_putchar('\n');
}
