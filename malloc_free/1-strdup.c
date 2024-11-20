#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the duplicated string, or NULL if memory
 *         allocation fails or str is NULL.
 */
char *_strdup(char *str)
{
	char *dup_str;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	/* Calculate the length of the string*/
	while (str[len] != '\0')
	{
		len++;
	}

	/*Allocate memory for the new string (+1 for the null terminator)*/
	dup_str = malloc((len + 1) * sizeof(char));
	if (dup_str == NULL)
	{
		return (NULL);
	}

	/* Copy the string into the newly allocated memory*/
	for (i = 0; i < len; i++)
	{
		dup_str[i] = str[i];
	}

	/* Add the null terminator*/
	dup_str[len] = '\0';

	return (dup_str);
}

