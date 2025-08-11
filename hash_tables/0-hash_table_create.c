#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 * @size: how many nodes in the table
 *
 * Return: pointer to new table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int count;

	if (size == 0)
	return (NULL);

	new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
	return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);

	if (new_table->array == NULL)
	{
	free(new_table);
	return (NULL);
	}

	while (count < size)
	{
	(new_table->array)[count] = NULL;
	count++;
	}

	return (new_table);
}

