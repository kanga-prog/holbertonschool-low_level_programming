#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_digit - Checks if a string contains only digits.
 * @str: The string to check.
 *
 * Return: 1 if the string is composed of digits, 0 otherwise.
 */
int is_digit(char *str)
{
	int i;  /* Declare i outside of the for loop */

	for (i = 0; str[i] != '\0'; i++)  /* Loop through each character */
	{
		if (!isdigit(str[i]))  /* Check if the character is not a digit */
		{
			return (0);  /* Return 0 if a non-digit character is found */
		}
	}
	return (1);  /* Return 1 if all characters are digits */
}

/**
 * main - Multiplies two positive numbers passed as arguments.
 * @argc: The number of command line arguments.
 * @argv: The array of command line arguments.
 *
 * Return: 0 on success, exits with status 98 if there is an error.
 */
int main(int argc, char *argv[])
{
	char command[1024];  /* Declare command at the top of the main function */

	/* Check if the number of arguments is correct */
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	/* Check if both arguments are valid numbers */
	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	/* Construct the command to multiply the numbers using bc */
	snprintf(command, sizeof(command), "echo '%s * %s' | bc", argv[1], argv[2]);

	/* Execute the command using system() and print the result */
	system(command);

	return (0);
}
