#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints a linked list
 * @h: pointer t  head of list
 * Return: number of nodes in list as size_t
 */
size_t print_list(const list_t *h)
{
	unsigned int _nodes = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);
		h = h->next;
		_nodes++;
	}
	return (_nodes);
}
