#include "main.h"

/**
 * set_bit - function that sets a bit at given index to 1
 * @n: value number to set bit in
 * @index: index to set bit at
 * Return: 1 if it worked or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max_num = 0x01;

	max_num <<= index;
	if (max_num == 0)
		return (-1);
	*n |= max_num;
	return (1);
}
