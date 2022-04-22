#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - compares strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if sane, <0 if s1 < s2, >0 if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int result = strcmp(s1, s2);

	return (result);
}
