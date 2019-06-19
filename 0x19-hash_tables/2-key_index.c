#include "hash_tables.h"
/**
 *key_index - Get the index of a key
 *@key: Variable that saves a value, indexed
 *@size: Size of the Hash table
 *Return: 
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int getter = 0;
	unsigned long int index = 0;

	getter = hash_djb2(key);

	index = getter % size;

	return (index);
}
