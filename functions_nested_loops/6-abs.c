#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to compute the absolute value of.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);  /* Return negation if n is negative */
	}
	else
	{
		return (n);   /* Return n if it is non-negative */
	}
}
