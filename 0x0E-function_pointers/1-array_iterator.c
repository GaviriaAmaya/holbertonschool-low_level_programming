#include "function_pointers.h"
#include <stdlib.h>
/**
 *array_iterator - Function that points to a function
 *@array: 
 *
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
