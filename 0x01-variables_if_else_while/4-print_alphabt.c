#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints positive, negative or zero at the n variable
 *
 * Return: Always success (0)
 */

int main(void)

{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'q' && c != 'e')
putchar (c);
}
putchar('\n');
return (0);
}
