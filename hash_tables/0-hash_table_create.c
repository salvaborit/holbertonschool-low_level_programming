#include "hash_tables.h"


/**
 * hash_table_create - creates a hash table of size size
 * @size: size of hash table
 * Return: pointer to newly created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable;

	newTable = malloc(sizeof(hash_table_t));
	if (!newTable)
		return (NULL);

	newTable->size = size;
	newTable->array = malloc(sizeof(hash_node_t *) * size);
	if (newTable->array == NULL)
	{
		free(newTable);
		return (NULL);
	}
	return (newTable);
}