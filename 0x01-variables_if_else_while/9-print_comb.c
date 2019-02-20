#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints
 *
 * Return: Always success (0)
 */

int main(void)

{
int c;
for (c = 48; c <= 57; c++)
{
putchar(c);
if (c != 57)
{
putchar(44);
putchar(' ');
}
}
putchar('\n');
return (0);
}
