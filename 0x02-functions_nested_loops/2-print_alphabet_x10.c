#include "holberton.h"
/**
 *print_alphabet_x10 - Prints the alphabet ten times, using function _putchar
 *
 *return - Always success
 */

void print_alphabet_x10(void)
{
char a, b;
for (b = 0; b < 10; b++)
{
for (a = 97; a <= 122; a++)
{
_putchar(a);
}
_putchar('\n');
}


}
