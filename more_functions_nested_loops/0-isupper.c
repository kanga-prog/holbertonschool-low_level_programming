#include <stdio.h>
#include <stddef.h>

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

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Test the function with different characters */
	char test_chars[] = {'A', 'a', 'Z', '1', '!', 'M'};
	size_t i;

	for (i = 0; i < sizeof(test_chars) / sizeof(test_chars[0]); i++)
	{
	putchar(test_chars[i]); /* Print the character being tested */
	putchar(':');           /* Print a separator */
	_isupper(test_chars[i]); /* Call the _isupper function */
	putchar('\n');         /* New line for better output readability */
	}

	return (0);
}
