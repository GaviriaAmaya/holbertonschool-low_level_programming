#include <stdio.h>
/**
 * main - Print all the base 16 chars
 * Return: Always success (0)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		putchar(number + 48);

	for (number = 0; number < 6; number++)
		putchar(number + 97);

	putchar('\n');

	return (0);
}
