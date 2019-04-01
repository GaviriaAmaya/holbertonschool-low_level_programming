#include <stdio.h>
/**
 *main - Prints the two digits all posible combinations
 *
 *Return: 0, always success
 */
int main(void)
{
int i;
int j;

for (i = 0; i <= 8; i++)
{
	for (j = i + 1; j <= 9; j++)
	{
		putchar(i + 48);
		putchar(j + 48);

		if (!(i == 8 && j == 9))
		{
		putchar(',');
		putchar(' ');
		}
	}
}
	putchar('\n');
	return (0);
}
