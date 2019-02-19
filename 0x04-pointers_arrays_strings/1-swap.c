#include "holberton.h"
/**
 *swap_int - Change the values from a to b, and visceversa
 *
 *
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
