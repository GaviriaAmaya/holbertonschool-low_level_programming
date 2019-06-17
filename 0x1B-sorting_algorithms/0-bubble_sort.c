#include "sort.h"
/**
 *bubble_sort - Apply bubble sorting algorithm
 *@array: Array received
 *@size: Size of the array
 *Return: Void
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j, aux, flag;

	if (array != '\0')
	{
		for (i = 0; i < size - 1; i++)
		{
			flag = 0;
			for (j = 0; j < size - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					aux = array[j];
					array[j] = array[j + 1];
					array[j + 1] = aux;
					flag = 1;
					print_array(array, size);
				}
			}
			if (flag == 0)
				break;
		}
	}
}
