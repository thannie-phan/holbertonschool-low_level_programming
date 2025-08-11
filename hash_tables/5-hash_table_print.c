#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: the hash table we want to print
 *
 *
 * Return: value
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_node;
	unsigned long int position = 0;
	int printed_before = 0;

	if (ht == NULL)
		return;

	putchar('{');

	while (position < ht->size)
	{
		current_node = ht->array[position];
		while (current_node != NULL)
		{
			if (printed_before)
				printf(", ");
			printf("'%s': '%s'", current_node->key, current_node->value);
			printed_before = 1;
			current_node = current_node->next;
		}
		position++;
	}
	putchar('}');
	putchar('\n');
}
