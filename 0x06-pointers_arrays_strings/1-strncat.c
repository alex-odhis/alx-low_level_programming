#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strncat - concatinates string
 *@dest: destination
 *@src: source destination
 *@n: number of characters to concatinate wit dest
 *Return: returns the concatinated string
 */

char *_strncat(char *dest, char *src, int n)
{
	src = strncat(dest, src, n);
	return (src);
}
