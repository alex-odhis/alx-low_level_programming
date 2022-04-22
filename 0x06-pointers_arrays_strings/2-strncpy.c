#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - copy string from source to destination
 * @dest: destination
 * * @src: source
 * @n: number of characters to copy
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	dest = strncpy(dest, src, n);
	return (dest);
}
