#include <stdio.h>

/**
 * cap_string - Capitalizes all words in a string.
 * @str: Pointer to the string to be modified.
 *
 * Return: A pointer to the resulting string.
 */
char *cap_string(char *str)
{
	int i = 0;
	int j;

	/* Define the separators for words */
	char separators[] = " \t\n,;.!?\"(){}";

	/* Capitalize the first letter if the string is not empty */
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}

	while (str[i] != '\0') /* Iterate through each character */
	{
		/* Check if the current character is a separator */
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				/* Capitalize the next character if it's lowercase */
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
				break; /* Exit the for loop once a separator is found */
			}
		}
		i++; /* Move to the next character */
	}

	return (str); /* Return pointer to the modified string */
}
