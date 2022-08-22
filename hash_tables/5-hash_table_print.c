#include "hash_tables.h"


/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0, printCount = 0;
	hash_node_t *slot = NULL;

	if (!ht)
		return;
    
	putchar('{');
	while (index < ht->size)
	{
		slot = ht->array[index];
		while (slot)
		{
			if (printCount != 0)
				printf(", ");
			printf("'%s': '%s'", slot->key, slot->value);
			slot = slot->next;
			printCount++;
		}
		index++;
	}
	printf("}\n");
}
