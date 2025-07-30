#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - add new node at end
 * @head: pointer to head pointer
 * @n: the int to store in node
 *
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node_end = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (new_node_end == NULL)
		return (NULL);

	new_node_end->n = n;
	new_node_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_node_end;
		new_node_end->prev = NULL;
		new_node_end->next = NULL;
		return (new_node_end);
	}

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_node_end;
		new_node_end->prev = temp;

	return (new_node_end);
}
