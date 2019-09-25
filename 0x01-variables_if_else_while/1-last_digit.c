#include <stdlib.h>
#include <time.h>
/**
 * main - Take the last digit of a number
 * Return: Always success (0)
 */
int main(void)
{
	int n;

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
