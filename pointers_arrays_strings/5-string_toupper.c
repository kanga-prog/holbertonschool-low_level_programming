#include <stdio.h>

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase.
 * @str: Pointer to the string to be converted.
 *
 * Return: A pointer to the resulting string.
 */
char *string_toupper(char *str)
{
	char *original_str = str; /* Pointer to the beginning of the string */

	while (*str) /* Iterate through each character of the string */
	{
		if (*str >= 'a' && *str <= 'z') /* Check if character is lowercase */
		{
			*str -= 32; /* Convert to uppercase by adjusting ASCII value */
		}
		str++; /* Move to the next character */
	}

	return (original_str); /* Return pointer to the beginning of the string */
}

