#include "holberton.h"
/**
 *
 *_abs - Return absolute value
 *
 *Return: Always success
 */

int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
n = n * -1;
return (n);
}
 _putchar('\n');
}
