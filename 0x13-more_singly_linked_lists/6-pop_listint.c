#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: pointer to a list pointer
 * Return: list
 */

int pop_listint(listint_t **head)
{
	listint_t *current = *head;

	if (*head == NULL)
		return (0);
	*head = current->next;
	free(current);
	current = NULL;
	return (0);
}
