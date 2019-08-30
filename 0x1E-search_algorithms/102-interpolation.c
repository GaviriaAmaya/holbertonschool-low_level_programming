#include "search_algos.h"
/**
 * interpolation_search - Apply the i. search algorithm
 * @array: Pointer to the array structure
 * @size: Lenght of the array
 * @value: To find
 * Return: Index of value if success. -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	sieze_t low = 0, high = size - 1, mid;

	while ((array[high] != array[low]) && (value >= array[low]) &&
	       (value <= array[high]))
	{
		mid = low + ((value - array[low]) * (high - low) /
			     (array[high] - array[low]));

		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}

	if (value == low)
		return (low);

	else
		return (-1);
}
