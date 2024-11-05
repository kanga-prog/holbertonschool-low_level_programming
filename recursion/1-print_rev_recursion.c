#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse, followed by a newline
 * @s: The string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')  /* Base case: if we've reached the end of the string*/
		return;       /* Stop the recursion*/

	_print_rev_recursion(s + 1);  /* Recursive call with the next character*/

	_putchar(*s);  /* Print the current character (after recursion)*/
}
