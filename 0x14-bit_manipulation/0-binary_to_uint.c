#include "main.h"
#include <string.h>

/**
 * binary_to_uint - function coverts binary to unsigned int
 * @b: pointer of binary to convert
 * Return: unsigned int converted result
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int result = 0;
	int slen = strlen(b);
	int base = 1;

	if (b == NULL)
		return (0);
	for (index = (slen - 1); index >= 0; index--)
	{
		if ((b[index] != '0') & (b[index] != '1'))
			return (0);
		if (b[index] == '1')
			result += base;
		base *= 2;
	}
	return (result);
}
