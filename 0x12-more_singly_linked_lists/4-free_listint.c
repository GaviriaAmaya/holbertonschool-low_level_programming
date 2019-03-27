#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *free_listint - Frees the memory allocation
 *@head: Pointer to the list
 */
void free_listint(listint_t *head)
{
	listint_t *free_node;
	/*Pointer to the main node*/

	while (head != NULL)
	{
		free_node = head->next;
		free(head);
		head = free_node;
	}
}
