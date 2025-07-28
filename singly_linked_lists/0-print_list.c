#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - print out list and return no of nodes
 * @h: the connector
 *
 * Return: no of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	
	while (h != NULL)
	{
		if (h->str == NULL)
		printf("[0] (nil)\n");
		else
		printf("[%u] %s\n", h->len, h->str);

		count++;
		h = h->next;
	}
	return (count);
}
