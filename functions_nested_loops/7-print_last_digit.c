#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The integer to get the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int last_digit;
	char output;

	last_digit = n % 10; /* Get the last digit */
	if (last_digit < 0)
	{
		last_digit = -last_digit; /* Make it positive if it's negative */
	}

	output = last_digit + '0'; /* Convert last digit to character */
	write(1, &output, 1);       /* Print the last digit as a character */
	return (last_digit);         /* Return the last digit */
}
