#include <stdio.h>
/**
 * main - Print the alphabet (Lowercase)
 *
 * Return: Always Success (0)
 */
int main(void)
{
	int n = 97;

	while (n >= 97 && n < 123)
	{
		putchar(n);
		n++;
	}

	putchar('\n');

	return (0);
}
