#include "hash_tables.h"
/**
 *hash_table_set - Adds key and value on a hash table
 *@ht: Hash table
 *@key: Key (String)
 *@value: String that set value
 *Return: If success, 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *aux;
	char *key_copy, *value_copy;

	if (key == NULL || key == '\0' || ht == NULL || value == NULL)
		return (0);
	key_copy = strdup(key);
	value_copy = strdup(value);
	index = key_index((unsigned char *)key_copy, ht->size);
	if (ht->array[index] != NULL)
	{
		aux = ht->array[index];
		while (aux)
		{
			if (strcmp(aux->key, key_copy) == 0)
			{
				aux->value = value_copy;
				return (1);
			}
			aux = aux->next;
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = key_copy;
	new_node->value = value_copy;
	if (ht->array[index] == NULL)
	{
		new_node->next = NULL;
		ht->array[index] = new_node;
		return (1);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
