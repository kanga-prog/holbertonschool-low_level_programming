#include <stdio.h>

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string to be printed.
 *
 * Return: Nothing.
 */
void print_rev(char *s)
{
	char *start = s;  /* Pointer to the start of the string */

	/* Move to the end of the string */
	while (*s != '\0')
	{
		s++;
	}

	/* Print the string in reverse */
	while (s > start)
	{
		s--;  /* Move back one character */
		putchar(*s);  /* Print the current character */
	}

	putchar('\n');  /* Print a new line at the end */
}
