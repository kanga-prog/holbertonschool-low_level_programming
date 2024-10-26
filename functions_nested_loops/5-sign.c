#include <unistd.h>
#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @n: The number to check.
 *
 * Return: 1 and prints '+' if n is greater than zero,
 *         0 and prints '0' if n is zero,
 *         -1 and prints '-' if n is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		write(1, "+", 1); /* Print '+' for positive numbers */
		return (1);       /* Return 1 */
	}
	else if (n == 0)
	{
		write(1, "0", 1); /* Print '0' for zero */
		return (0);       /* Return 0 */
	}
	else
	{
		write(1, "-", 1); /* Print '-' for negative numbers */
		return (-1);      /* Return -1 */
	}
}
