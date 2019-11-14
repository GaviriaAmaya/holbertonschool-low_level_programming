#include "holberton.h"
/**
 * main - Prints Holberton char by char
 * Return: Always success
 */
int main(void)
{
	char *b = "Holberton";
	int i;

	for (i = 0; b[i] != '\0'; i++)
		_putchar(b[i]);

	_putchar('\n');

	return (0);
}
