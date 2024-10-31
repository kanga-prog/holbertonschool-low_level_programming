#include <unistd.h>
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
		write(1, s, 1);  /* Write the current character to stdout */
	}

	write(1, "\n", 1);  /* Write a new line at the end */
}
