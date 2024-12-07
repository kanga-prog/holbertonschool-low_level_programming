#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed in binary
 *
 * Description: This function takes an unsigned long integer `n` and prints
 * its binary representation to standard output. If the number is zero,
 * the function prints '0'.
 *
 * Return: None.
 */
void print_binary(unsigned long int n)
{
	int flag = 0;
	unsigned long int i;

	/* Special case: If the number is 0, print "0"*/
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/* Iterate over the bits of the number*/
	for (i = sizeof(n) * 8 - 1; i != (unsigned long int)-1; i--)
	{
		if (n & (1UL << i))  /* Check if the i-th bit is 1*/
		{
			_putchar('1');
			flag = 1;  /* Mark that we found a 1*/
		}
		else if (flag)  /* Once we've found a 1, print subsequent 0s*/
		{
			_putchar('0');
		}
	}
}

