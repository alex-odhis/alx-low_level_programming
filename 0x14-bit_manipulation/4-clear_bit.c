#include "main.h"

/**
 * clear_bit - function that sets a bit to 0 at given index
 * @n: The interger to set bit in
 * @index: index to set bit at
 * Return: 1 if it worked or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max_num = 0x01;

	max_num = ~(max_num << index);
	if (max_num == 0x00)
		return (-1);
	*n &= max_num;
	return (1);
}
