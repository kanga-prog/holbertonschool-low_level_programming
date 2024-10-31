#include <stdio.h>

/**
 * _strcpy - Copies the string pointed to by src to dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string to be copied.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, const char *src)
{
	char *start = dest;  /* Save the starting address of dest */

	while (*src != '\0')  /* Copy characters from src to dest */
	{
		*dest = *src;     /* Copy the current character */
		dest++;           /* Move to the next position in dest */
		src++;            /* Move to the next character in src */
	}

	*dest = '\0';  /* Add the null terminator to dest */

	return (start);  /* Return the pointer to the destination */
}
