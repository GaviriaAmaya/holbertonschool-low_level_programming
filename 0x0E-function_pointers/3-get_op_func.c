#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
 *get_op_func - Selects the correct operation from the functions library
 *@s: Operator passed to the program
 *Return: Pointer to the function that accurates to the right operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i <= 4)
	{
		if (*(ops[i].op) == *s)
		{
			return (ops[i].f);
		}
	i++;
	}
	return (NULL);
}
