#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints numbers from 0 to 9 on the same line.
 *
 * Return: Nothing.
 */
void print_numbers(void)
{
	int a;  /* Variable to hold the current number */

	for (a = 0; a < 10; a++)
	{
	putchar(a + '0');  /* Convert the integer to character and print */
	}
	putchar('\n');  /* Print a new line at the end */
}
