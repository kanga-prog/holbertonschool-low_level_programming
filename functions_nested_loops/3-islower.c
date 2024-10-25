#include "main.h"

/**
 * _islower - Checks if the character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')  /* Check if c is between 'a' and 'z' */
	{
		return (1);  /* c is lowercase */
	}
	return (0);  /* c is not lowercase */
}
