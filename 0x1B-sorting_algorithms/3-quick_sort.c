#include "sort.h"
/**
 * quick_sort - Applies the Quick sort algorithm
 * @array: Array to order
 * @size: Size of the array
 * Return: None (Void Function)
 **/
void quick_sort(int *array, size_t size)
{
	recursive_quick_sort(array, size, array, size);
}
