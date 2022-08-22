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

/**
* hash_node_t_len - returns the number of elements in a linked list
* @h: head of linked list
* Return: number of elements in linked list
*/
size_t hash_node_t_len(const hash_node_t *head)
{
	size_t i = 0;

	for (i = 0; head; i++)
		head = head->next;
	return (i);
}
