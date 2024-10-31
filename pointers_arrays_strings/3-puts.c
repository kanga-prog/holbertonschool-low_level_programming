#include <stdio.h>

/**
 * _puts - Prints a string followed by a new line.
 * @str: Pointer to the string to be printed.
 *
 * Return: Nothing.
 */
void _puts(char *str)
{
	while (*str != '\0')  /* Iterate through each character of the string */
	{
		putchar(*str);    /* Print the current character */
		str++;            /* Move to the next character */
	}
	putchar('\n');        /* Print a new line at the end */
}
