#include<stdio.h>
#include "main.h"

/**
 * _isupper - Checks if the character is uppercase.
 * @c: The character to be checked.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	return (0);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char letter;

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
	putchar(letter);
	putchar(':');
	putchar(' ');
	putchar(_isupper(letter) + '0');
	putchar('\n');
	}

	return (0);
}
