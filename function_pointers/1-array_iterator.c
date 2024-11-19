#include <stdio.h>

/**
 * array_iterator - applies a function to each element of an array
 * @array: the array of integers
 * @size: the size of the array
 * @action: a function pointer to the function to apply to each element
 *
 * Description: This function applies the action function to each element
 * of the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < (int)size; i++)
	{
		action(array[i]); /* Apply the action to each element of the array */
	}
}
