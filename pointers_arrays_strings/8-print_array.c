#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: Pointer to the array to be printed.
 * @n: The number of elements to print.
 *
 * Return: Nothing.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);  /* Print the current element */

		if (i < n - 1)  /* Check if it's not the last element */
		{
			printf(", ");  /* Print a comma and space */
		}
	}

	printf("\n");  /* Print a new line at the end */
}
