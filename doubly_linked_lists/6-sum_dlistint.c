#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n)
 * @head: the connector
 *
 * Return: sum of all the data of linkedlist. if empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	return (0);

	dlistint_t *point_to_node = head;

	while (point_to_node != NULL)
	{
		sum = sum + point_to_node->n;
		point_to_node = point_to_node->next;
	}
	return (sum);
}
