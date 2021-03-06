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

/**
 * recursive_quick_sort - Recall of the quick sort Lomuto partition
 * @array: Array to sort
 * @size: Array lenght
 * @print: Printer of array
 * @size2: Retake the size
 */
void recursive_quick_sort(int *array, size_t size, int *print, size_t size2)
{
	size_t i = -1, pivot = size - 1, j, aux;

	if (array != NULL)
	{
		for (j = 0; j < pivot; j++)
		{
			if (array[j] <= array[pivot])
			{
				i++;
				if (i != j)
				{
					aux = array[i];
					array[i] = array[j];
					array[j] = aux;
					print_array(print, size2);
				}
			}
		}
		if ((i + 1) != pivot)
		{
			aux = array[i + 1];
			array[i + 1] = array[pivot];
			array[pivot] = aux;
			print_array(print, size2);
		}
		if ((int) i >= 1)
			recursive_quick_sort(&array[0], i + 1, print, size2);

		if ((size - (i + 2)) > 1)
			recursive_quick_sort(&array[i + 2], size - (i + 2), print, size2);
	}
	else
		return;
}
