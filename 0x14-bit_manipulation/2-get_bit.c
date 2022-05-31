#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: binary value
 * @index: index of which to return value in bit
 * Return: value in bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int base_max = 0x01;

	base_max <<= index;
	if (base_max == 0)
		return (-1);
	if ((n & base_max))
		return (1);
	else
		return (0);
}
