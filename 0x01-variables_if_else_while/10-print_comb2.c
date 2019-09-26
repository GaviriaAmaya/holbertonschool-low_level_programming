#include <stdio.h>
/**
 * main - Print the numbers from 00 to 99
 * Return: Always success (0)
 */
int main(void)
{
	int decene, unit;

	for (decene = 0; decene < 10; decene++)
	{
		for (unit = 0; unit < 10; unit++)
		{
			putchar(decene + 48);
			putchar(unit + 48);

			if (!(decene == 9 && unit == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}

	}

	putchar('\n');
	return (0);
}
