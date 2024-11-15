#include <stdio.h>
#include <stdlib.h>  /* For malloc */

/**
 * create_array - Creates an array of chars and initializes
 * it with a specific char.
 * @size: The size of the array.
 * @c: The character to initialize each element with.
 *
 * Return: A pointer to the array, or NULL if it fails or size is 0.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	/* If size is 0, return NULL */
	if (size == 0)
	{
		return (NULL);
	}

	/* Allocate memory for the array */
	array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);  /* Return NULL if malloc fails */
	}

	/* Initialize each element of the array with the given character */
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	/* Return the pointer to the initialized array */
	return (array);
}

