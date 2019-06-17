#include "hash_tables.h"
/**
 * hash_table_get - Get the value of a Key
 * @ht: Hash Table
 * @key: Index to search
 * Return: Return value of the key, or Null
 **/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *aux;

	if (key == NULL || key == '\0' || ht == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	aux = ht->array[index];
	while (aux != NULL)
	{
	if (strcmp(aux->key, key) == 0)
		return (aux->value);
	aux = aux->next;
	}
	return (NULL);
}
