#include "holberton.h"
/**
 *jack_bauer - Prints all the hours and minutes on 1 day
 *
 *@min1, @min2, @hour1, @hour2: Represents each digit on a clock
 *
 *Return: Void
 */
void jack_bauer(void)
{int min1, min2, hour1, hour2;
for (hour1 = 0; hour1 < 3; hour1++)
{
for (hour2 = 0; hour2 < 10; hour2++)
{
for (min1 = 0; min1 < 6; min1++)
{
for (min2 = 0; min2 < 10; min2++)
{
if (hour1 == 2 && hour2 > 3)
{
}
else
{
_putchar (hour1 + 48);
_putchar (hour2 + 48);
_putchar (58);
_putchar (min1 + 48);
_putchar (min2 + 48);
_putchar ('\n');
}}}}}
}
