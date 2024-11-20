#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program.
 * @ac: The number of arguments.
 * @av: The array of argument strings.
 *
 * Return: A pointer to the new concatenated string, or NULL if it fails.
 *         Returns NULL if ac == 0 or av == NULL.
 */
char *argstostr(int ac, char **av)
{
	char *concat_str;
	int i, j, total_len = 0, k = 0;

	/* Return NULL if no arguments or av is NULL*/
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	/* Calculate the total length of the new string*/
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total_len++;
		}
		total_len++; /* For the newline character after each argument*/
	}

	/* Allocate memory for the new string (+1 for the null terminator)*/
	concat_str = malloc((total_len + 1) * sizeof(char));
	if (concat_str == NULL)
	{
		return (NULL); /* If memory allocation fails, return NULL*/
	}

	/* Concatenate the arguments with newlines*/
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concat_str[k++] = av[i][j];
		}
		concat_str[k++] = '\n'; /* Add a newline after each argument*/
	}

	concat_str[k] = '\0'; /* Null-terminate the new string*/

	return (concat_str);
}

