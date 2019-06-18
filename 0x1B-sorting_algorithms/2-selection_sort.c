#include "sort.h"
/**
 *selection_sort - Aplies the Selection algorithm
 *@array: Array received
 *@size: Size of the array
 *Return: None (Void function)
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, index, aux;

	if (array != '\0')
	{
		for (i = 0; i < size - 1; i++)
		{
			index = i;
			for (j = i + 1; j < size; j++)
			{
				if (array[j] < array[index])
				{
					index = j;
				}
				aux = array[i];
				array[i] = array[index];
				array[index] = aux;
			}
			print_array(array, size);
		}
	}
}
