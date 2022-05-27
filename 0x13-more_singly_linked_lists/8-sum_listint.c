#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - functions adds value the nodes
 * @head: head pointer to list
 * Return: sum of the node values
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
