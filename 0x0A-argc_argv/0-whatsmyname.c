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
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
