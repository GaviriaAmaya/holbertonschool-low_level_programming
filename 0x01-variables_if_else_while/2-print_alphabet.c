#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Prints alphabet with putchar command
 *
 * Return: Always success (0)
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z' ; c++)
putchar (c);
putchar('\n');
return (0);
}
