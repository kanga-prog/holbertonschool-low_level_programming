#include <stdio.h>

/**
 * int_index - searches for an integer in an array
 * @array: the array of integers
 * @size: the number of elements in the array
 * @cmp: a function pointer to the comparison function
 *
 * Return: the index of the first element for which cmp does not return 0,
 *         or -1 if no element matches or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);  /* Return the index of the first match */
	}

	return (-1);  /* No match found */
}

