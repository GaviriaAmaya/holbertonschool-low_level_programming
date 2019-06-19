#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *free_listint2 - Frees the memory allocation
 *@head: Pointer to the list
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
	{
		return;
	}
	if (*head != NULL)
	{
		free_listint2(&((*head)->next));
		free(*head);
	}
	*head = NULL;
}
