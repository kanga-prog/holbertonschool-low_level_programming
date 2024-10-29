#include <stdio.h>

/**
 * _isupper - checks if a character is uppercase
 * @c: character to check
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	/* Check if the character is between 'A' and 'Z' */
	if (c >= 'A' && c <= 'Z')
	{
	putchar('1'); /* Print '1' if c is uppercase */
	}
	else
	{
	putchar('0'); /* Print '0' otherwise */
	}

	return (0); /* Return 0 as a general exit status (not used here) */
}
