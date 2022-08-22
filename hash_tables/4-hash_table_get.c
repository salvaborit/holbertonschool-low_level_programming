#include "hash_tables.h"


/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key to look for
 * Return: value associated with key, NULL on failure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *slot = NULL;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	slot = ht->array[index];
	while (slot)
	{
		if (strcmp(slot->key, key) == 0)
			return (slot->value);
		slot = slot->next;
	}
	return (NULL);
}
