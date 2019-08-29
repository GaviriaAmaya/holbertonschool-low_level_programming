#include "search_algos.h"
/**
 * linear_search - Apply the linear search algorithm
 * @array: Pointer to data structure (Array type) to apply the algorithm
 * @size: Size of array
 * @value: Value to search
 * Return: Index of the value, -1 if fails
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		if (array[i] != value)
		{
			printf("Value checked array[%ld] = [%d]\n",
			       i, array[i]);
			i++;
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n",
			       i, array[i]);
			return (i);
		}
	}


	return (-1);
}
