#include <stdio.h>
#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1
 * @n: Pointer to the number whose bit is to be set
 * @index: The index of the bit to set (starting from 0)
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if index is out of range (assuming 64-bit unsigned long)*/
	if (index >= 64)
	{
		return (-1);  /* Error: index is out of range*/
	}

	/* Create a mask with the bit at 'index' set to 1*/
	*n |= (1UL << index);  /* 1UL is an unsigned long literal*/

	return (1);
}
