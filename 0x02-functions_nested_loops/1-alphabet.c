#include "holberton.h"
/**
 *main - Prints the alphabet once, using the prototyped function _putchar
 *
 *return - Always success
 */

void print_alphabet(void)
{
char a;

for (a = 97; a <= 122; a++)

{
_putchar(a);
}
_putchar('\n');

}
