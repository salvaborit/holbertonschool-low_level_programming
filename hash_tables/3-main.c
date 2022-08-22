#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *current_node = NULL;
	int print_counter = 0;

	if (ht)
	{
		putchar('{');
		while (i < ht->size)
		{
		current_node = ht->array[i];
		while (current_node != NULL)
		{
			if (print_counter > 0)
				printf(", ");
			printf("'%s': '%s'", current_node->key, current_node->value);
			current_node = current_node->next;
			print_counter++;
		}
		i++;
		}
		printf("}\n");
	}
}

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(4);
    hash_table_set(ht, "name 1", "hetairas ");
    hash_table_set(ht, "name 2", "mentioner");
    hash_table_set(ht, "name 3", "heliotropes");
    hash_table_set(ht, "name 4", "neurospora");
    hash_table_set(ht, "name 5", "depravement");
    hash_table_set(ht, "name 6", "serafins");
    hash_table_set(ht, "name 7", "stylist");
    hash_table_set(ht, "name 8", "subgenera");
    hash_table_print(ht);

    return (EXIT_SUCCESS);
}