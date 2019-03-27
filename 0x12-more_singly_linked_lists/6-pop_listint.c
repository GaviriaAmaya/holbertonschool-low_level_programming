#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *pop_listint - Free and delete the head of a list
 *@head: Pointer to the head
 *
 *Return: If success, Value of each node
 */
int pop_listint(listint_t **head)
{
	listint_t *aux;
	int i = 0;

	if (*head == NULL)
		return (0);

        aux = *head;

	if (*head != NULL)
	{
		*head = aux->next;
		i = aux->n;
		free(aux);
		aux = NULL;
	}
	return (i);
}
