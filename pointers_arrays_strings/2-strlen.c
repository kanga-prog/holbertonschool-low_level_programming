#include <stdio.h>

/**
 * _strlen - Calculates the length of a string.
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	/* Iterate through the string until we reach the null terminator */
	while (*s != '\0')
	{
		length++;
		s++; /* Move to the next character */
	}

	return (length);
}
