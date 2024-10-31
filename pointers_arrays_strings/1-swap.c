#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * This function takes two pointers to integers and swaps their values.
 */
void swap_int(int *a, int *b)
{
	int temp; /* Temporary variable to hold the value */

	temp = *a; /* Store the value at address a in temp */
	*a = *b;   /* Assign the value at address b to the value at address a */
	*b = temp; /* Assign the value in temp to the value at address b */
}
