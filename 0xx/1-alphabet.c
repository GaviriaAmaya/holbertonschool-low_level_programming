#include "holberton.h"
/**
 *print_alphabet - Prints the alphabet once, using function _putchar
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
