#include <stdio.h>
/**
 * main - Prints the size of diferent data types
 * Return: None
 */
int main(void)
{
	int c = sizeof(char), i = sizeof(int), li = sizeof(long int);
	int ll = sizeof(long long int), f = sizeof(float);
	char *s = "Size of";

	printf("%s a char: %d byte(s)\n%s an int: %d byte(s)\n"
		"%s a long int: %d byte(s)\n%s a long long int: %d byte(s)\n"
		"%s a float: %d byte(s)\n", s, c, s, i, s, li, s, ll, s, f);

	return (0);
}
