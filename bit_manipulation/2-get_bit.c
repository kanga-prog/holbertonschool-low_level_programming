#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the number to check
 * @index: the index of the bit to retrieve, starting from 0
 *
 * Return: the value of the bit at index or -1 if an error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/* Check if the index is out range for an unsigned long int (norm 64 b)*/
	if (index >= sizeof(n) * 8)
	{
		return (-1);  /* Error: index is out of range*/
	}

	return ((n >> index) & 1);
}

