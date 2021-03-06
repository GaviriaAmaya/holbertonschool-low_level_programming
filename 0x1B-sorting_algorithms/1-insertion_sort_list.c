#include "sort.h"
/**
 *insertion_sort_list - Algorithm List sort
 *@list: Access to the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *aux, *ins = *list, *i = *list;

	if (ins != NULL)
	{
		ins = ins->next;
		while (ins != NULL)
		{
			i = ins;
			ins = ins->next;
			while (i->prev != NULL && i->n < i->prev->n)
			{
				if (i->next != NULL)
					i->next->prev = i->prev;

				if (i->prev->prev != NULL)
					i->prev->prev->next = i;
				else
					*list = i;
			i->prev->next = i->next;
			i->next = i->prev;
			aux = i->prev->prev;
			i->prev->prev = i;
			i->prev = aux;
			print_list(*list);
			}
		}
	}
	else
		return;
}
