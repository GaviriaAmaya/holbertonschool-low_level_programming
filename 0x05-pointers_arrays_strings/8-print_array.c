#include "holberton.h"
/**
 * print_array - Print an array
 * @a: Pointer to the first array position
 * @n: Amount of elements t be printed
 * Return: None
 */
void print_array(int *a, int n)
{
	int i;

	if (n >= 0)
	{
		for (i = 0; i < (n - 1); i++)
			printf("%d, ", a[i]);
		printf("%d\n", a[i]);
	}

	else
		return;
}
