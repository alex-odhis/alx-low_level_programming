#include "main.h"
#include <stdio.h>

/**
 * main - prints program name
 * @argc: argument count
 * @argv: argument vector count
 * Return: 0 seccess
 */

int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
