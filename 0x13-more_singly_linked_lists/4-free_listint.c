#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - a function that frees a listint_t
 * @head: head pointer to linked list
 */

void free_listint(listint_t *head)
{
	listint_t *temp_node;

	while (head)
	{
		temp_node = head;
		head = head->next;
		free(temp_node);
	}
	free(head);
}
