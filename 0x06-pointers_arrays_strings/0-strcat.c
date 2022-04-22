#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - concatinates string
 * @dest: destination
 * @src: source destination
 * Return: returns the concatinated string
 */

char *_strcat(char *dest, char *src)
{
	src = strcat(dest, src);
	return (src);
}
