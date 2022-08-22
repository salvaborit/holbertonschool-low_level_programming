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
	hash_node_t *newNode = NULL, *slot = NULL;

	if (!key || !ht)
		return (0);
	index = key_index((const unsigned char*)key, ht->size);
	/* create new node */
	newNode = malloc(sizeof(hash_node_t));
	if (!newNode)
		return (0);
	memset(newNode, 0, sizeof(hash_node_t));
	newNode->key = strdup((char *)key);
	newNode->value = strdup((char *)value);
	newNode->next = NULL;

	slot = ht->array[index];
	/*if slot is taken and matching key is found, update value */
	while (slot)
	{
		if (strcmp(slot->key, key) == 0)
		{
			free(slot->value);
			slot->value = strdup(value);
			return (1);
		}
		slot = slot->next;
	}
	/* if slot is free */
	if (ht->array[index] == NULL)
	{
		ht->array[index] = newNode;
		return (1);
	}
	/* if slot is taken and there is no matching key, add node to beginning */
	newNode->next = ht->array[index];
	ht->array[index] = newNode;
	return (1);
}