#include <stdio.h>

/**
 * main - prints basse 1o numbers to console
 * Return: 0 success
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		printf("%d", number);
	}
	putchar('\n');
	return (0);
}
