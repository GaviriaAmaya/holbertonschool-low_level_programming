#include <stdio.h>
/**
 * main - Print the numbers from 0 to 9
 * Return: Always success (0)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		if (number != 9)
		{
			putchar(number + 48);
			putchar(',');
			putchar(' ');
		}
		else
			putchar(number + 48);

	}
	return (0);
}
