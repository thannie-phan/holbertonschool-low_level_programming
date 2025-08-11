#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - give index of the key
 * @key: the key
 * @size: size of array of hash table
 *
 * Return: int where key is stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int get_hash, where;

	get_hash = hash_djb2(key);
	where = get_hash % size;

	return (where);
}
