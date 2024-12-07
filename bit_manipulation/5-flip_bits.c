#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: the first number.
 * @m: the second number.
 * XOR of n and m gives a number where bits differ
 * Remove the rightmost set bit
 *
 * Return: the number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	/* Count the number of 1s in xor_result*/
	while (xor_result)
	{
		xor_result &= (xor_result - 1);
		count++;  /* Increment the count of 1s*/
	}

	return (count);
}

