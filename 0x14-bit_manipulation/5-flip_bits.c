#include "main.h"

/**
 * flip_bits - function that gets number of bits needed to flip
 * @n: the number of bit flips needed to equal m for n
 * @m: the number to set
 * Return: The number of fliped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;
	unsigned long int xor = (n ^ m);
	unsigned long int max_num = 0x01;

	while (max_num <= xor)
	{
		if (max_num & xor)
			flips++;
		max_num <<= 1;
	}
	return (flips);
}
