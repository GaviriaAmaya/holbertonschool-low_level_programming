#include <stdio.h>
/**
 * main - Prints the numbers from 00 to 99
 * Return: Always success (0)
 */

int main(void)
{

	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar(i + 48);
			putchar(j + 48);
			if (!(i == 9 && j == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
putchar('\n');
return (0);
}
