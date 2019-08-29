#include "holberton.h"
/**
 * swap_int - Swaps the value of two integers
 * @a: Points to the a integer
 * @b: Points to the b integer
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int aux = *a;

	*a = *b;
	*b = aux;
}
