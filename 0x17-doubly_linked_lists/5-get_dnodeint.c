#include "lists.h"
/**
 * get_dnodeint_at_index - Get node at ind
 * @head: POints head
 * @index: Index to the list
 * Return: Pointer to the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	else if (index == 0)
		return (head);
	else
		return (get_dnodeint_at_index((*head).next, --index));
}
