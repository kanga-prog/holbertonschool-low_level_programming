#include <stdio.h>

/**
 * leet - Encodes a string into 1337.
 * @str: Pointer to the string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	char leet_chars[] = "aeotlAEOTL";
	char leet_replacements[] = "4307143071";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_replacements[j];
			}
		}
	}

	return (str);
}
