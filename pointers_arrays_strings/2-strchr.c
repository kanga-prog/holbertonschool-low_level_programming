#include <stdio.h>

/**
 * _strchr - Locates a character in a string.
 * @s: The string to search in.
 * @c: The character to locate.
 *
 * Return: Pointer to the first occurrence of c in s, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0') /* Iterate through the string */
	{
		if (*s == c) /* Check if the current character matches c */
		{
			return (s); /* Return pointer to the matching character */
		}
		s++; /* Move to the next character */
	}

	if (*s == c) /* Check for the null terminator character */
	{
		return (s); /* Return pointer to the null terminator if it matches */
	}

	return (NULL); /* Character not found */
}
