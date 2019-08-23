#include <stdio.h>
/**
 * main - Prints alphabet in lowercase followed by uppercase
 *
 * Return: Always Success(0)
 */
int main(void)
{
	int n = 97, m = 65;

	while (n != 123)
	{
		putchar(n);
		n++;
	}

	while (m >= 65 && m <= 90)
	{
		putchar(m);
		m++;
	}

	putchar('\n');

	return (0);
}
