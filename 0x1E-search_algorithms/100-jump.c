#include "search_algos.h"
#include <math.h>
/**
 * jump_search - Apply Jump search algorithm
 * @array: Pointer to the array
 * @size: Lenght of the array
 * @value: Item to find
 * Return: Index of value in the array, -1 if fails
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, jump = sqrt(size);

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		if (array[i] >= value)
			break;

		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		i += jump;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", i - jump, i);

	jump = i - jump;

	while (jump <= i && jump < size)
	{
		printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);

		if (array[jump] == value)
			return (jump);
		jump++;
	}

	return (-1);
}
