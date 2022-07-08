#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - function to get number of nodes in a list
 * @h: list pointer
 * return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		nodes++;
																}
	return (nodes);
}
