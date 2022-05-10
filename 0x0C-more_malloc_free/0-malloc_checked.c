#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - program name
 * @b: argument passed in
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b * sizeof(int));

	if ( ptr == NULL)
		exit(98);
	return (ptr);
}
