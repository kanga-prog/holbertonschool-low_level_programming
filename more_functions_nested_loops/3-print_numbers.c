#include "main.h"

/**
 * print_number - Prints numbers from 0 to 9 on the same line.
 *
 * Return: Nothing.
 */
void print_number(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
	_putchar(a + '0');
	}
	_putchar('\n');
}
