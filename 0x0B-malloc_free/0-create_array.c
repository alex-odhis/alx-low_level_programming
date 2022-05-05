#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - function name
 * @size: size of chars
 * @c: char
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);
	if (s == NULL)
		return (NULL);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
