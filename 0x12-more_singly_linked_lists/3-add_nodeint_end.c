#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_nodeint_end - Adds a node into the end of a list
 *@head: Pointer to the original list
 *@n: Value of each element of the list
 *
 *Return: If success, address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_node;
	listint_t *ender;

	add_node = malloc(sizeof(head));
	if (add_node == NULL)
	{
		free(add_node);
		return (NULL);
	}
	add_node->n = n;
	add_node->next = NULL;
	/*Iterate the node until the end*/
	ender = *head;
	/*Assignment ender to the head*/
	if (*head == NULL)
	{
		*head = add_node;
		return (*head);
	}
	while (ender->next != NULL)
	{
	ender = ender->next;
	}
	ender->next = add_node;

	return (ender);
}
