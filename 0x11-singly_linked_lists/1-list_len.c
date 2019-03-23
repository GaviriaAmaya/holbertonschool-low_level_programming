#include "lists.h"
/**
 *list-len - Prints the lenght of a list
 *@h: Node to list
 *
 *Return: Lenght
 */
size_t list_len(const list_t *h)
{
	int counter = 0;

if (h != NULL)
	{
	if (h->next == NULL)
	{
	return (counter + 1);
	}
	counter ++;
	return (counter + list_len(h->next));
	}
return (counter);
}
