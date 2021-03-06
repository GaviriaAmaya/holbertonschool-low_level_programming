#include "hash_tables.h"
/**
 *hash_table_create - Creates a Hash Table
 *@size: Size of the Hash Table
 *Return: Hash Table type
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_h_t;
	unsigned long int i;

	new_h_t = malloc(sizeof(hash_table_t));

	if (new_h_t == NULL)
		return (NULL);

	new_h_t->array = malloc(sizeof(hash_node_t *) * size);

	if (new_h_t->array == NULL)
	{
		free(new_h_t);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_h_t->array[i] = NULL;

	new_h_t->size = size;

	return (new_h_t);
}
