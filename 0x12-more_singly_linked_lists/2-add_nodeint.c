#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_nodeint - Adds a node into a list
 *@head: Pointer to the original list
 *@n: Value of each element of the list
 *
 *Return: If success, address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addition;

	addition = malloc(sizeof(head));
	if (addition == NULL)
	{
		free(addition);
		return (NULL);
	}
	addition->n = n;
	addition->next = *head;
	*head = addition;
	return (addition);
}
