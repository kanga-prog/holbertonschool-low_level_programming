#include <stdio.h>

/**
 * reset_to_98 - Updates the value pointed to by n to 98
 * @n: Pointer to an integer
 *
 * This function dereferences the pointer and sets the value to 98.
 */
void reset_to_98(int *n)
{
	*n = 98;
}
