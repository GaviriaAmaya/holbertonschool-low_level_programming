#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *print_listint - Prints a list
 *@h: Pointer to the list
 *
 *Return: If success, list lenght
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
	/*Iterates the list*/
		i++;
	/*Iterator to the return value*/
	}
	return (i);
}
