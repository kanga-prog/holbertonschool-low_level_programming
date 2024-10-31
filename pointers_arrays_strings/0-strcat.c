#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string to which src will be appended.
 * @src: The source string to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *original_dest = dest; /* Keep a pointer to the beginning of dest */

	/* Move dest pointer to the end of the string */
	while (*dest != '\0')
	{
		dest++;
	}

	/* Append src to dest */
	while (*src != '\0')
	{
		*dest = *src; /* Copy each character from src to dest */
		dest++;
		src++;
	}

	*dest = '\0'; /* Null terminate the concatenated string */

	return (original_dest); /* Return the pointer to the beginning of dest */
}
