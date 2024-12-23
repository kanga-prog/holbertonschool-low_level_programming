#include "main.h"

/**
 * check_prime - helper function to check if a number is prime recursively.
 * @n: number to check.
 * @i: current divisor to check against.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int check_prime(int n, int i)
{
	if (i * i > n)
	return (1);

	if (n % i == 0)
		return (0);

	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the number is prime, otherwise returns 0.
 * @n: number to check.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n == 2)
		return (1);

	if (n % 2 == 0)
		return (0);

	return (check_prime(n, 3));
}

