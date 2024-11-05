#include <stdio.h>
/**
 * _puts_recursion - Print a string followed by a newline
 * @s: The string to be printed
 *
 * Description: This function recursively prints each character of the string
 * followed by a new line. It stops recursion when the null
 * terminator is reached.
 */
void _puts_recursion(char *s)
{
	/* Base case: if the string is empty, return*/
	if (*s == '\0')
	{
		putchar('\n'); /* Print the newline after the string is fully printed*/
		return;
	}

	/* Print the current character*/
	putchar(*s);

	/* Recursive call to print the next characters*/
	_puts_recursion(s + 1);
}
