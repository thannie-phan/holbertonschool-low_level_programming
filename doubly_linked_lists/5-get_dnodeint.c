#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get the right node
 * @head: the connector
 * @index: index of node
 *
 * Return: the nth node. if does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *point_to_node = head;

	if (point_to_node == NULL)
	return (NULL);

	while (count != index)
	{
		count++;
		point_to_node = point_to_node->next;
		if (point_to_node == NULL)
		return (NULL);
	}

	return (point_to_node);
}

