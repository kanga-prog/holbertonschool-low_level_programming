#include <unistd.h>
#include <stdio.h>

/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the string to be printed.
 *
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int len = 0;  /* Variable to store the length of the string */
	int start;    /* Variable to determine the starting point for printing */

	/* Calculate the length of the string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Determine the starting point for the second half */
	if (len % 2 == 0)
	{
		start = len / 2;  /* For even length, start from the middle */
	}
	else
	{
		start = (len / 2) + 1;  /* For odd length, start from the middle + 1 */
	}

	/* Print the second half of the string */
	while (str[start] != '\0')
	{
		write(1, &str[start], 1);  /* Write each character to stdout */
		start++;
	}

	write(1, "\n", 1);  /* Write a new line at the end */
}
