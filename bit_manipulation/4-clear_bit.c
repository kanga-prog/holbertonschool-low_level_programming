#include <limits.h>
#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number whose bit is to be cleared.
 * @index: Index of the bit to be cleared.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int mask;

	/* Check if the index is within a valid range*/
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);  /* Error: index out of bounds*/
	}

	/* Create a mask where the bit at 'index' is 0 and all others are 1*/
	mask = 1UL << index;  /* Shift 1 to the desired index*/
	mask = ~mask;

	/* Apply the mask to clear the bit at the specified index*/
	*n &= mask;

	return (1);

}
