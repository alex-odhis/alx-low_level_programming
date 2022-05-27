#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - funnction that prints the elements in a linked list
 * @h: list pointer head
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
