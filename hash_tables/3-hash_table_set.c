#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: key (str), cannot be empty
 * @value: value (str) assosiated with key, can be empty
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *newNode = NULL, *p = NULL;

	if (!key || !ht)
		return (0);
	if (!value)
		value = "";

	index = key_index(key, ht->size);

	
}
