#include "lists.h"
/**
 *print_list - Prints the value of each part of a list
 *@h: First node of the list
 *
 *Return: Size of the list
 */

size_t print_list(const list_t *h)
{
	int counter;

	for (counter = 0; h != NULL; counter++)
	{
		if (h->str == NULL)
			{
			printf("[0] %p\n", h->str);
			}
		else
		{
		printf("[%i] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (counter);
}
