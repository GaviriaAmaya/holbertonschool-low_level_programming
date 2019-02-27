#include "holberton.h"
#include <stdio.h>
/**
 *print_diagsums - Prints the sums of the diagonals in a 2d array
 *@a: Pointer to the 2d Array
 *@size: Var that determines the size of the matrix
 *Return: None
 */
void print_diagsums(int *a, int size)
{
int i, j;
int diag1 = 0;
int diag2 = 0;
int sumd1 = 0;
int sumd2 = 0;

	for (i = 0; i <= (size * size) && diag1 < size; i += size + 1)
	{
		sumd1 += a[i];
		diag1++;
	}

	for (j = 0; j <= (size * size) && diag2 < size; j += size - 1)
	{
		sumd2 += a[j];
		diag2++;
	}
	printf("%i, ", sumd1);
	printf("%i, ", sumd2);
	printf("\n");
}
