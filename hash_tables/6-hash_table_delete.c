#include "hash_tables.h"


/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *nodeA = NULL, *nodeB = NULL;

	if (!ht)
		return;

	while (index < ht->size)
	{
		nodeA = ht->array[index];
		while (nodeA)
		{
			nodeB = nodeA->next;
			free(nodeA->key);
			free(nodeA->value);
			free(nodeA);
			nodeA = nodeB;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
