#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: header pointer for linked list
 * Return: size_t
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
