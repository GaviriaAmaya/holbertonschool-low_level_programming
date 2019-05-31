#include "lists.h"
/**
 * free_dlistint - Its Free
 * @head: List
 */
void free_dlistint(dlistint_t *head)
{
	for (; head != NULL; head = head->next)
	free(head);
}
