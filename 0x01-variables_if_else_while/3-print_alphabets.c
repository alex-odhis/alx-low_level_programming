#include <stdio.h>

/**
 * main - prints alphabets
 * Return: 0 successful
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter < 'z'; letter++)
	{
		putchar(letter);
	}
	for (letters = 'A'; letter < 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
