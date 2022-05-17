#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_numbers - returns the sum of all its parameters
 * @separator: string argument
 * @n: int argument
 * @...: other arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);
		if (separator == NULL)
			continue;
		else
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
