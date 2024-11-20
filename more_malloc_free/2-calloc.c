#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Return: A pointer to the allocated memory, or NULL if an error occurs.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;            /* Declare ptr at the beginning*/
	unsigned int i;       /* Declare i at the beginning*/

	/* If nmemb or size is zero, return NULL*/
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	/* Allocate memory for the array*/
	ptr = malloc(nmemb * size);

	/* If malloc fails, return NULL*/
	if (ptr == NULL)
	{
		return (NULL);
	}

	/* Set all allocated memory to zero*/
	for (i = 0; i < nmemb * size; i++)
	{
		((char *)ptr)[i] = 0;
	}

	/* Return the pointer to the allocated memory*/
	return (ptr);
}

