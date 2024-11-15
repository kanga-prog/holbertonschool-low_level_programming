#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated memory containing s1,
 *         followed by the first n bytes of s2, and null-terminated.
 *         NULL if the function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *concat_str;

	/* If s1 is NULL, treat it as an empty string */
	if (s1 == NULL)
		s1 = "";

	/* If s2 is NULL, treat it as an empty string */
	if (s2 == NULL)
		s2 = "";

	/* Get the length of s1 and s2 */
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	/* If n is greater than the length of s2, use the entire string s2 */
	if (n >= len2)
		n = len2;

	/* Allocate memory for the concatenated string */
	concat_str = malloc(sizeof(char) * (len1 + n + 1));
	if (concat_str == NULL)
		return (NULL);

	/* Copy s1 to concat_str */
	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];

	/* Copy the first n bytes of s2 to concat_str */
	for (j = 0; j < n; j++)
		concat_str[i + j] = s2[j];

	/* Null-terminate the concatenated string */
	concat_str[i + j] = '\0';

	return (concat_str);
}
