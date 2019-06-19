#include "hash_tables.h"
/**
 *hash_djb2 - Hash function algorithm by Dan Bernstein
 *@str: String processed by the hash function
 *Return: Hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
