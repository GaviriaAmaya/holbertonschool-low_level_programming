#include "hash_tables.h"
/**
 *hash_table_create - Creates a Hash Table
 *@size: Size of the Hash Table
 *Return: Hash Table type
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_h_t;

	new_h_t = malloc(/*sizeof(unsigned long int) **/size);

	if (new_h_t == NULL)
		return (NULL);

	return (new_h_t);
}
