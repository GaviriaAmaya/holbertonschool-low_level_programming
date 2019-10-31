#include <string.h>
#include "lists.h"
/**
 *add_node - Links a new node
 *@head: Points to the first position of the node
 *@str: String to copy
 *
 *Return: Adress to head
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *node2;
char *other_str;
int size;

other_str = strdup(str);
if (other_str == NULL)
	{
	return (NULL);
	}
for (size = 0; other_str[size] != '\0'; size++)
	{
	}
node2 = malloc(sizeof(list_t));
if (node2 == NULL)
	{
	free(node2);
	return (NULL);
	}

node2->str = other_str;
node2->len = size;
node2->next = *head;
*head = node2;

return (*head);
}
