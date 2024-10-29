#include "main.h"

/**
 * print_numbers - Print numbers from 0 to 9.
 *
 * This function prints the numbers 0 to 9, followed by a newline.
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
	_putchar(c + '0');
	}
	_putchar('\n');
}
