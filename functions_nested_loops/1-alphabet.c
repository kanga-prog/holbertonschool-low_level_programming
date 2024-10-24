#include <stdio.h>

/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 */
void _putchar(char c)
{
	putchar(c);
}

/**
 * print_alphabet - prints the alphabet in lowercase followed by a new line
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}

/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

