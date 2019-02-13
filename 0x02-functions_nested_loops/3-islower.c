#include "holberton.h"
/**
 *_islower - Detects and prints 0 if the chaaracter is lowcase
 *@c: Character
 * Return: On success 1.
 *
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
