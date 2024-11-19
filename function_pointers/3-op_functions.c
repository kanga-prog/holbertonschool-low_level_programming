#include "3-calc.h"
#include <unistd.h>  /* For write */

/**
 * op_add - Adds two numbers
 * @a: First number
 * @b: Second number
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two numbers
 * @a: First number
 * @b: Second number
 * Return: The difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers
 * @a: First number
 * @b: Second number
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two numbers
 * @a: First number
 * @b: Second number
 * Return: The result of division of a by b
 *         If b is 0, print Error and exit with status 100
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		write(2, "Error\n", 6);
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Computes the remainder of the division of two numbers
 * @a: First number
 * @b: Second number
 * Return: The remainder of the division of a by b
 *         If b is 0, print Error and exit with status 100
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		write(2, "Error\n", 6);
		exit(100);
	}
	return (a % b);
}

