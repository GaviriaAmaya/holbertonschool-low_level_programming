#include "holberton.h"
/**
 * _isdigit - Print 1 if is digit
 *@c: Character
 *
 *Return: Success if 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
