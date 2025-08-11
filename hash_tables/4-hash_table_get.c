#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - adds an element to the hash table.
 * @ht: the hash table we want to add the element in
 * @key: the key
 *
 *
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int position;
	hash_node_t *current_node;

	if (ht == NULL || key == NULL)
	return (0);

	position = key_index((unsigned char *)key, ht->size);
	current_node = ht->array[position];

	while (current_node != NULL)
	{
	if (strcmp(current_node->key, key) == 0)
		return (current_node->value);
	current_node = current_node->next;
	}

	return (NULL);
}
