#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node to the end of a linked list
 * @head: A pointer to list 
 * @n: An integer data value for the new node
 * Return: address of the inserted element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr_node, *temp;

	ptr_node = malloc(sizeof(listint_t));
	if (ptr_node == NULL)
		return (NULL);
	ptr_node->n = n;
	if (*head == NULL)
	{
		ptr_node->next = *head;
		*head = ptr_node;
	}
	else
	{
		ptr_node->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = ptr_node;
	}
	return (ptr_node);
}
