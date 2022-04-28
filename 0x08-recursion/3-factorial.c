#include "main.h"
#include <stdio.h>

/**
 * factorial - gets rhe factorial of anumber
 * @n: integer
 * Return: factorial of the numer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if(n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
