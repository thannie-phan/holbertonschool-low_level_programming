#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: the hash table we want to delete
 *
 *
 * Return: value
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int position = 0;
	hash_node_t *current_node;
	hash_node_t *node_to_free;

	if (ht == NULL)
		return;

	while (position < ht->size)
	{
		current_node = ht->array[position];
		while (current_node != NULL)
		{
			node_to_free = current_node;
			current_node = current_node->next;

			free(node_to_free->key);
			free(node_to_free->value);
			free(node_to_free);
		}
	position++;
	}
	free(ht->array);
	free(ht);
}

