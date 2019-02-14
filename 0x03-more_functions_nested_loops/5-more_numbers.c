#include "holberton.h"
/**
 * more_numbers - Print numbers from 1 to 14
 *
 *
 *Return: Void
 */

void more_numbers(void)
{
int a;
int b;
int units;
int dec;

b = 0;
while (b < 9)
{

	for (a = 0; a <= 14; a++)
		{
			units = (a % 10);
			dec = (a / 10);
			_putchar (units + 48);
			if (a >= 10)
			{
			_putchar (dec + 48);
			}
		}

		_putchar ('\n');
}
