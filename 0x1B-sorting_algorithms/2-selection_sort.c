#include "sort.h"
/**
 *selection_sort - Aplies the Selection algorithm
 *@array: Array received
 *@size: Size of the array
 *Return: None (Void function)
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, aux, flag;

	if (array != '\0')
	{
		for (i = 0; i < size; i++)
		{
			flag = 0;
			for (j = 0; j < size -1; j++)
			{
				if (array[j] > array[i])
				{
					aux = array[i];
					array[i] = array[j];
					array[j] = aux;
					flag = 1;
					print_array(array, size);
				}
			}
			if (flag == 0)
				break;
		}
	}
}
