#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_node_end - add new node at end
 * @head: double pointer to head pointer
 * @str: string element to store in node
 *
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node_end = malloc(sizeof(list_t));
	int length_of_string = 0;
	list_t *temp = *head;

	if (new_node_end == NULL)
	return (NULL);

	new_node_end->str = strdup(str);

	while (str[length_of_string] != '\0')
	length_of_string++;
	new_node_end->len = length_of_string;

	new_node_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_node_end;
		return (new_node_end);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node_end;

	return (new_node_end);
}

