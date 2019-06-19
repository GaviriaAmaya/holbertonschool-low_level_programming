#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
 *main - Operates 2 integers
 *@argc: Counts the number of arguments
 *@argv: Array of strings
 *
 *Return: Always success (0)
 */
int main(int argc, char **argv)
{
	int a, b;
	int (*f)(int, int);
	int result;

	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		f = get_op_func(argv[2]);
		result = (*f)(a, b);
		printf("%d\n", result);
	}
	else
	if (argc != 4)
	{
		return (98);
	}

	return (0);
}
