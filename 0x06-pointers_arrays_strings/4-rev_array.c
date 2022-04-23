#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - prints reverse
 * @a: array
 * @n: number of element in the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
