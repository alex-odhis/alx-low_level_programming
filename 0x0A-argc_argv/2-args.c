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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
