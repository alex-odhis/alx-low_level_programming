#include "holberton.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function name
 * @str: string to be allocated memory
 * Return: pointer to the memory allocated
 */

char *_strdup(char *str)
{
	int len;
	char *mem;

	if (str == NULL)
		return (NULL);
	len = strlen(str) + 1;
	mem = malloc(len * sizeof(char));
	if (mem == NULL)
		return (NULL);
	return (mem);
}
