#include <unistd.h>
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string.
 * @str: Pointer to the string to be printed.
 *
 * Return: Nothing.
 */
void puts2(char *str)
{
	int i = 0;  /* Index for looping through the string */

	while (str[i] != '\0')  /* Loop until the end of the string */
	{
		if (i % 2 == 0)  /* Check if the index is even */
		{
			write(1, &str[i], 1);  /* Write the character to stdout */
		}
		i++;  /* Move to the next character */
	}

	write(1, "\n", 1);  /* Write a new line at the end */
}
