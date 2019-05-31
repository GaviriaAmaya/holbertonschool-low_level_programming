#include "lists.h"
/**
 * dlistint_len - Measure the lenght of a list
 * @h: Linked list received
 * Return: Lenght of the list (No. of nodes)
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	for (; h != NULL; i++, h = h->next)
	;

	return (i);
}
