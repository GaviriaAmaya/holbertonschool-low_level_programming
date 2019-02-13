#include "holberton.h"
/**
 *_isalpha - Detects and prints 1 if 'c' is alphabetic
 *
 * Return: On success 1.
 *
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
