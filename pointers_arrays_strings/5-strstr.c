#include <stdio.h>

/**
 * _strstr - Finds the first occurrence of a substring (needle) at (haystack)
 * @haystack: The string to be searched
 * @needle: The substring to be found in haystack
 *
 * Return: A pointer to the first occurrence substring needle in haystack,
 *         or NULL if needle is not found
 */
char *_strstr(char *haystack, char *needle)
{
	/* Declare variables before any code execution to comply with C90 */
	char *h;
	char *start;
	char *n;

	/* case empty string, return haystack (first match  beginning) */
	if (*needle == '\0')
	{
		return (haystack);
	}

	/* Iterate over each character of haystack */
	for (h = haystack; *h != '\0'; h++)
	{
		/* Check if the substring starting from h matches needle */
		start = h;
		n = needle;

		while (*start && *n && *start == *n)
		{
			start++;
			n++;
		}

		/* If we reached the end of needle, we found a match */
		if (*n == '\0')
		{
			return (h);
		}
	}

	/* Return NULL if no match found */
	return (NULL);
}
