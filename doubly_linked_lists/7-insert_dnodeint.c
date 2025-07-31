#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at a given position
 * @h: the connector
 * @idx: the index
 * @n: the index
 *
 * Return: address of new node, NULL if fail
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new_node, *current = *h, *stored;

	if (h == NULL)
	return (NULL);

	if (idx == 0)
	return (add_dnodeint(h, n));

	while (current != NULL && count < (idx - 1))
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
	return (NULL);

	if (current->next == NULL)
	return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	stored = current->next;

	new_node->next = stored;
	new_node->prev = current;

	stored->prev = new_node;
	current->next = new_node;

	return (new_node);
}
