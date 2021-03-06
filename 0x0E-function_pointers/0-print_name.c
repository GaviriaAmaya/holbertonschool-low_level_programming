#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name - Prints a name
 *@name: Pointer to a string that contains the name
 *@f: Pointer to the function of a char string
 *Return: None
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
