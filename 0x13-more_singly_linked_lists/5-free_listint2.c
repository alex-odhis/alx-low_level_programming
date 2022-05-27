#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: a pointe to a pointer to a list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_node;

	if (head == NULL)
		return;
	temp_node = *head;
	while (*head)
	{
		temp_node = *head;
		(*head) = (*head)->next;
		free(temp_node);
	}
	*head = NULL;
}
