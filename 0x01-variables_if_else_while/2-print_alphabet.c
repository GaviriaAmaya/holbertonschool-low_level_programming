#include <stdio.h>
/**
 * main - Prints the alphabet
 * Return: Always success (0)
 */
int main(void)
{
	int alphabet;

	for (alphabet = 0; alphabet < 26; alphabet++)
		putchar(alphabet + 97);

	putchar('\n');

	return (0);
}
