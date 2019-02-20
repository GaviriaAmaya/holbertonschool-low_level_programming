#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints alpabet without q and e, using putchar function
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
