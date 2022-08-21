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
	hash_node_t *slot = NULL, *prev = NULL;

	if (!key || !ht)
		return (0);

	index = key_index((const unsigned char*)key, ht->size);
	slot = ht->array[index];

	/* check if given slot is empty & adds key/value pair if so*/
	if (!slot)
	{
		slot = ht_add(key, value);
		if (!slot)
			return (0);
		return (1);
	}

	/* if slot is taken walk through slots 
	until end is reached or matching key is found */
	while (slot)
	{
		/* if matching key is found, update value */
		if (strcmp(slot->key, key) == 0)
		{
			free(slot->value);
			slot->value = NULL;
			slot->value = malloc(strlen(value) + 1);
			if (slot->value == NULL)
				return (0);
			slot->value = strdup((char *)value);
			return (1);
		}

		prev = slot;
		slot = slot->next;
	}
	/* if matching key isn't found, add node in the end */
	prev->next = ht_add(key, value);
	return (1);
}

hash_node_t *ht_add(const char *key, const char *value)
{
	hash_node_t *slot = NULL;

	slot = malloc(sizeof(hash_node_t));
	if (!slot)
		return (NULL);
	slot->key = malloc(strlen(key) + 1);
	if (slot->key == NULL)
	{
		free(slot);
		return (NULL);
	}
	slot->value = malloc(strlen(value) + 1);
	if (slot->value == NULL)
	{
		free(slot);
		free(slot->key);
		return (NULL);
	}

	slot->key = strdup((char *)key);
	slot->value = strdup((char *)value);
	slot->next = NULL;
	return (slot);
}
