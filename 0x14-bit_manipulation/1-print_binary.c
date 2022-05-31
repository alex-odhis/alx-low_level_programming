#include "main.h"

/**
 * print_binary - converts number to binary
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	unsigned int index = 0, max = 32768;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (max)
	{
		if (index == 1 && (n & max) == 0)
			_putchar('0');
		else if ((n & max) != 0)
		{
			_putchar('1');
			index = 1;
		}
		max >>= 1;
	}
}
