#include "holberton.h"
/**
 *swap_int - Change the values from a to b, and visceversa
 *@a: Pointer to an integer
 *@b: Pointer to the integer to swap
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
