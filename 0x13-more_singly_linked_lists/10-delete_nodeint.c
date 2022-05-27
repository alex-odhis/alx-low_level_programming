#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: pointer list pointer
 * @head: index at which to delete
 * Return: 1 if success, -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *node_to_delete;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		while (i < index)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);
			i++;
		}
		node_to_delete = temp;
		node_to_delete = node_to_delete->next;
		temp->next = node_to_delete->next;
		free(node_to_delete);
	}
	return (1);
}
