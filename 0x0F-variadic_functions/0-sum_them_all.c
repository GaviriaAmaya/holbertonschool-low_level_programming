#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 *sum_them_all - Summa of all arguments
 *@n: Number of arguments to +
 *
 *Return: Result of the addition if success
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;

	va_list list;

	va_start(list, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			result += va_arg(list, int);
		}
	}
	else
	{
		return (0);
	}
	va_end(list);

	return (result);
}
