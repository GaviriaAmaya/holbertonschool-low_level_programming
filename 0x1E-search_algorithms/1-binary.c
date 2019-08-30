#include "search_algos.h"
/**
 * binary_search - Apply the binary search algorithm
 * @array: Pointer to the source array
 * @size: Length of the array
 * @value: Value to be found on the array
 * Return: Index where value is located, or -1 if error
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, j = size - 1, pivot, printer;

	if (array == NULL)
		return (-1);

	while (i <= j)
	{
		printf("Searching in array: ");

		for (printer = i; (printer < j); printer++)
			printf("%d, ", array[printer]);

		printf("%d\n", array[printer]);

		pivot = ((i + j) / 2);

		if (array[pivot] < value)
			i = pivot + 1;

		else if (array[pivot] > value)
			j = pivot - 1;

		else
			return (pivot);
	}

	return (-1);
}
