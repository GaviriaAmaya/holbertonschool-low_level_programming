#include "holberton.h"
/**
 *_isupper - Prints 1 if the character is uppercase
 *@c: Character
 *
 *Return: 1 if success
 */

int _isupper(int c)
{
	if (c >= 65 && c >= 90)
	{
		return (0);
	}
	else
	{
		return (1);
	}
	_putchar ('\n');
}
