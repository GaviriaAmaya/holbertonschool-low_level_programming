#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Take the last digit of a number
 * Return: Always success (0)
 */
int main(void)
{
	int n, mod;
	char *c = "Last digit of", *g = "and is greater than 5",
		*z = "and is 0", *l = "and is less than 6 and not 0";

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	mod = n % 10;

	if (mod > 5)
		printf("%s %i is %i %s\n", c, n, mod, g);
	else if (mod < 6 && mod != 0)
		printf("%s %i is %i %s\n", c, n, mod, l);
	else
		printf("%s %i is %i %s\n", c, n, mod, z);

	return (0);
}
