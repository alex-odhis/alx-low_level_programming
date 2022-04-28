#include "main.h"
#include <math.h>
/**
 * _pow_recursion - return x to the power of y
 * @x: argument
 * @y: argument
 * Return: x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	return (x *= _pow_recursion(x, y - 1));
}
