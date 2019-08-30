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

	lenght = lenght % 2 == 0 ? lenght / 2 : (lenght - 1) / 2;

	for (; str[lenght] != '\0'; lenght++)
		_putchar(str[lenght]);

	_putchar('\n');
}
