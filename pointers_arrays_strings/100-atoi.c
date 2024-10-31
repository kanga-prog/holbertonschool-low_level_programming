#include <stdio.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to be converted.
 *
 * Return: The converted integer or 0 if no valid number is found.
 */
int _atoi(char *s)
{
	int sign = 1;    /* To track the sign of the number */
	unsigned int num = 0;  /* To store the number */
	int started = 0; /* To check if we've started forming a number */

	while (*s)  /* Loop through each character in the string */
	{
		if (*s == '-')  /* Check for negative sign */
		{
			sign *= -1;  /* Reverse the sign */
		}
		else if (*s == '+')  /* Check for positive sign */
		{
			/* Positive sign, do nothing */
		}
		else if (*s >= '0' && *s <= '9')  /* Check if the character is a digit */
		{
			started = 1;  /* Mark that we've started forming a number */
			num = (num * 10) + (*s - '0');  /* Update the number */
		}
		else if (started)  /* Stop if we have started and encounter a non-digit */
		{
			break;
		}
		s++;  /* Move to the next character */
	}

	return (sign * num);  /* Return the number with its sign */
}
