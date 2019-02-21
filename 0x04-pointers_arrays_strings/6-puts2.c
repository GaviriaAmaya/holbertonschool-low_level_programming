#include "holberton.h"
/**
 * puts2 - Prints only pair characters
 *@str: String that allows to change the values in the main prog
 *
 *Return: Void
 */
void puts2(char *str)
{
int t = 0;

	while (*(str + t))
	{
	if ((t % 2) == 0)
	_putchar (*(str + t));
	t++;
	}
	_putchar('\n');
}
