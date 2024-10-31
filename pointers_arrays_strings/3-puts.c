#include <unistd.h>  // For the write function
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
		write(1, str, 1);  /* Write the current character to stdout */
		str++;              /* Move to the next character */
	}
	write(1, "\n", 1);      /* Write a new line at the end */
}
