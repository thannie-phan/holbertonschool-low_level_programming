#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at a given position
 * @head: the connector
 * @index: the index
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *stored_prev_node, *node_to_delete = *head, *stored_next_node;

	if (head == NULL || (*head) == NULL)
	return (-1);

	if (index == 0)
	{
	stored_next_node = node_to_delete->next;
	if (stored_next_node != NULL)
		stored_next_node->prev = NULL;

	*head = stored_next_node;
	free(node_to_delete);
	return (1);
	}

	while (node_to_delete != NULL && count < index)
	{
		node_to_delete = node_to_delete->next;
		count++;
	}
	if (node_to_delete == NULL)
	return (-1);
	stored_next_node = node_to_delete->next;
	stored_prev_node = node_to_delete->prev;

	if (stored_next_node != NULL)
		stored_next_node->prev = stored_prev_node;

	if (stored_prev_node != NULL)
		stored_prev_node->next = stored_next_node;
	else
		(*head) = stored_next_node;

	free(node_to_delete);
	return (1);
}

