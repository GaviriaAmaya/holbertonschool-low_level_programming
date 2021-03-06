#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
 *op_add - Returns the addition of two integers
 *@a: Integer that's the operator value
 *@b: Integer that's the operator value
 *Return: Result of the operation
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - Returns the substraction of two integers
 *@a: Integer that's the operator value
 *@b: Integer that's the operator value
 *Return: Result of the operation
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - Returns the multiplication of two integers
 *@a: Integer that's the operator value
 *@b: Integer that's the operator value
 *Return: Result of the operation
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - Returns the division of two integers
 *@a: Integer that's the operator value
 *@b: Integer that's the operator value
 *Return: Result of the operation
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - Returns the module of two integers
 *@a: Integer that's the operator value
 *@b: Integer that's the operator value
 *Return: Result of the operation
 */

int op_mod(int a, int b)
{
	return (a % b);
}
