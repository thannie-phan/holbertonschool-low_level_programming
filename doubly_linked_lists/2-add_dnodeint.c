#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - add new node at start
 * @head: pointer to head pointer
 * @n: the int to store in node
 *
 * Return: the address of the new element. NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	 int length_of_string = 0;

	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head != NULL)
	head->prev = new_node;

	*head = new_node;

	return (new_node);
}
