#include "holberton.h"
/**
 * _isalpha - Checks if a variable is alphabetical
 * @c: Integer that will be something at print
 * Return: 1 if is alphabetical, 0 if is something else
 */
int _isalpha(int c)
{
	return ((c > 96 && c < 123) || (c > 64 && c < 91) ? 1 : 0);
}
