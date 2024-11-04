#include <stdio.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to search in.
 * @accept: The string containing the accepted bytes.
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s) /* Iterate through each character in s */
	{
		p = accept; /* Pointer to check against accept */
		while (*p) /* Iterate through each character in accept */
		{
			if (*s == *p) /* If a matching byte is found */
			{
				return (s); /* Return pointer to the matching byte */
			}
			p++; /* Move to the next byte in accept */
		}
		s++; /* Move to the next byte in s */
	}

	return (NULL); /* No matching byte found */
}
