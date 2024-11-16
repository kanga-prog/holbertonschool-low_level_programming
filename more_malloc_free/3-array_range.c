#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max, inclusive.
 * @min: The first integer in the array.
 * @max: The last integer in the array.
 *
 * Return: A pointer to the newly created array, or NULL if it fails.
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	/* If min > max, return NULL */
	if (min > max)
		return (NULL);

	/* Calculate the size of the array */
	size = max - min + 1;

	/* Allocate memory for the array */
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	/* Fill the array with values from min to max */
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
