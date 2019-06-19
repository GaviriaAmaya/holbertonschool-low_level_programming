#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *listint_len - Return the amount of nodes in a list
 *@h: Pointer to the list
 *
 *Return: If success, return the number of nodes. If fails, return 0
 */
size_t listint_len(const listint_t *h)
{
	int i;

	if (h == NULL)
	{
		return (0);
	}

	for (i = 0; h; h = h->next, i++)
	{
	}
	return (i);
}
