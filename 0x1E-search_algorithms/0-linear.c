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
	int really = 0;

	if (*array && array != NULL)
	{
		while(i < size)
		{
			if (array[i] == value)
				return(i);
			else
			{
				printf("Value checked array[%d] = [%d]\n",
				       really, array[i]);
				really++;
				i++;
			}
		}
	}

	return (-1);
}
