#include "holberton.h"
/**
 *swap_int - Change the values from a to b, and visceversa
 *@a: Pointer to an integer
 *@b: Pointer to the integer to swap
 *
 */
void swap_int(int *a, int *b)
{
	int s;
	int t;

	s = *a;
	t = *b;
	*b = s;
	*a = t;
}
