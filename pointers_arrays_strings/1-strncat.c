#include <stdio.h>

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: The destination string to which src will be appended.
 * @src: The source string to be appended to dest.
 * @n: The maximum number of bytes to copy from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, const char *src, int n)
{
	char *original_dest = dest; /* Pointer to the beginning of dest */

	/* Move dest pointer to the end of the string */
	while (*dest != '\0')
	{
		dest++;
	}

	/* Append at most n bytes from src to dest */
	while (n > 0 && *src != '\0')
	{
		*dest = *src; /* Copy each character from src to dest */
		dest++;
		src++;
		n--;
	}

	*dest = '\0'; /* Null terminate the concatenated string */

	return (original_dest); /* Return pointer to the beginning of dest */
}
