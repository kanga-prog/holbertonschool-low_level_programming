#include "main.h"

/**
 * _isupper - Checks if the character isuppercase.
 * @c: The character to be checked.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'A') /* Check if c is between 'A' and 'Z' */
	{
		return (1);
	}
		return (0);
}
