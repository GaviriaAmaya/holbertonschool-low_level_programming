#include "lists.h"
/**
 *sum_dlistint - Lists
 *@head: Points to Head of the linked list
 *Return: Additionum of all the data in the linked list
 */
int sum_dlistint(dlistint_t *head)
{
	static int sum;

	if (head != NULL)
	{
		if ((*head).next == NULL)
			return (sum + (*head).n);
		sum += (*head).n;
		return (sum_dlistint((*head).next));
	}
	return (0);
}
