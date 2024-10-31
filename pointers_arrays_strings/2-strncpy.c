#include <stdio.h>

/**
 * _strncpy - Copies a string up to n bytes from src to dest.
 * @dest: The destination string where src will be copied.
 * @src: The source string to be copied.
 * @n: The maximum number of bytes to copy from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, const char *src, int n)
{
	char *original_dest = dest; /* Pointer to the beginning of dest */
	int i;

	for (i = 0; i < n; i++)
	{
		if (*src != '\0') /* Copy character if src is not finished */
		{
			*dest = *src;
			src++;
		}
		else /* If src is finished, fill with null bytes */
		{
			*dest = '\0';
		}
		dest++;
	}

	return (original_dest); /* Return pointer to the beginning of dest */
}
